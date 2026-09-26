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

void insert_at_tail(Node * &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head =newnode;
        tail = newnode;
        return ;
    }
    tail->next=newnode;
    tail = newnode;
}

void insert_at_head(Node* &head,Node* &tail,int v)
{
    Node* newnode = new Node(v);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return ;
    }
    newnode->next=head;
    head = newnode;
}
void delete_at_pos(Node* &head,Node* &tail,int size,int v)
{
    Node* del=NULL;
    Node *tmp=head;
    if(v==0)
    {
        del=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        delete del;
        return ;
        
    }
    v--;
    while(v--)
    {
        tmp=tmp->next;
    }
    del=tmp->next;
    tmp->next=del->next;
    if(tail==del)
    {
        tail=tmp;

    }
    delete del;
}

int main()
{
    int t;
    cin>>t;
     int size=0;
    Node *head = NULL;
     Node*tail = NULL;

    while(t--)
    {
        
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            size++;
            insert_at_head(head,tail,v);
        }
        else if(x==1)
        {
            size++;
            insert_at_tail(head,tail,v);

        }
        else if(x==2)
        {
            if(v<size)
            {
                delete_at_pos(head,tail,size,v);

                size--;
                
            }
            
        }
         Node* tmp=head;
            while(tmp)
            {
                cout<<tmp->val<<" ";
                tmp = tmp->next;
            }
            cout<<endl;



    }

    

    
    return 0;
}