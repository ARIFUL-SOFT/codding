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
    
    



    return 0;
}