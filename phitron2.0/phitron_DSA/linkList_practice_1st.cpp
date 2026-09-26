#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head,int val)
{
    Node * newnode= new Node(val);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    newnode->next=head;
    head = newnode;
}

void insert_at_last(Node* &head ,Node* &tail,int val)
{
    Node*newnode= new Node(val);

    if(head==NULL)
    {
        head = newnode;
        tail= newnode;
        return;
    }

    tail->next=newnode;
    tail=newnode;

}

void insert_at_middle(Node* &head,int val,int idx)
{
    Node*newnode= new Node(val);
    Node * temp=head;

    idx-=2;
    while(idx--)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next= newnode;
}

void any_duplicat(Node* head)
{
    
}


int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);
    Node*tail=new Node(40);


    head->next=a;
    a->next=b;
    b->next=tail;

    //insertion at head
    insert_at_head(head,8);
    insert_at_head(head,5);
    insert_at_head(head,1);

    //insertion at last
    insert_at_last(head,tail,60);
    insert_at_last(head,tail,70);

    //insert at middle position
    insert_at_middle(head,35,4);
    insert_at_middle(head,35,6);
    insert_at_middle(head,35,9);

     

    //print a link list
    Node*temp=head;
    int x=0;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
        x++;
    }
    cout<<endl;
    cout<<"size of link list: "<<x;

    cout<<"any duplicate valu: ";
    any_duplicat(head);

    
    return 0;
}