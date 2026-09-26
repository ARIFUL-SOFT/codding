#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left ,*right;
    Node (int value)
    {
        data = value;
        left = right = NULL;

    }
};

Node* insert (Node *root ,int target)
{
    //base case
    if(root==NULL)
    {
        Node*temp = new Node(target);
        return temp;
    }
    //target jodi root thake choto hoi
    if(root->data>target)
    {
        root->left=insert(root->left,target);
    }
    //target jodi root thake boro o soman hoi
    else{
        root->right=insert(root->right,target);

    }
    return root;

}

void inorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    //left
    inorder(root->left);
    //root
    cout<<root->data<<" ";
    //right
    inorder(root->right);

}

bool search(Node* root,int target)
{
    //base case
    if(!root)
    {
        return 0;
    }
    if(root->data==target)
    {
        return 1;
    }
    //jodi root ki data thake target choto hoi
    if(target<root->data)
    {
        return search(root->left,target);


    }
    //jodi root thake target boro hoi
    else
    {
        return search(root->right,target);
    }
}


Node*deleteNode(Node*root,int target)
{
    //base case
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data>target)
    {
        root->left= deleteNode(root->left,target);

    }
    else if(root->data<target)
    {
        root->right=deleteNode(root->right,target);

    }
    //root data ar target same
    else{

        //leaf node hoile 
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        //one child exist
        else if(!root->left)//exist root right node
        {
            Node *temp= root->right;
            delete root;
            return temp;
        }
        else if(!root->right)//exist left node
        {
            Node *temp= root->left;
            delete root;
            return temp;
        }
        //2 ta leaf thakle ki korbo
        else
        {
            //find the greatest child from left 
            Node * child = root->left;
            Node*parent = root;

            //right most node hobe child 
            while(child->right)
            {
                parent = child;
                child = child->right;
            }


            //root ar parent jodi diffrent hoi
            if(root!=parent)
            {
                parent->right= child->left;//amr jodi most left node ar bame node thake takey adjaust korar jonno
                child->right= root->right;
                child->left=root ->left;
                delete root;
                return child;
            }
            //root ar parant jodi same hoi
            else//(root == parent)
            {
                child->right= root->right;
                delete root;
                return child;


            }

        }
    }
}



int main()
{
    int arr[]={3,7,4,1,6,8};
    Node *root=NULL;
    for(int i=0;i<6;i++)
    {
        root = insert(root,arr[i]);
    } 

    //print kore dhaki aitah ki thik vabey dukce ki na
    //inorder print korle assendin vaber hoi
    cout<<"assendin order:";
    inorder(root);
    cout<<endl;
    
    //now i want to search an targer.is this here or not
    cout<<search(root,7)<<endl;

    //delete at any position
    cout<<"delete position"<<endl;

    deleteNode(root,7);

    cout<<"print agin tree\n";

    inorder(root);



    return 0;
}