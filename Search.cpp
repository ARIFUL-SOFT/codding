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

void serch_index(Node * head,int find)
{
    Node * tmp= head;
    int flag =0;
    int i=0,idx=0;
    while(tmp)
    {
        
        if(tmp->val==find)
        {
            flag = 1;
            idx = i;
        }
        tmp=tmp->next;
        i++;
    }
    if(flag==0)
    {
        cout<<"-1\n";
    }
    else{
        cout<<idx<<endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int val;
    Node *head = NULL;
    Node*tail = NULL;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int find;
    cin>>find;
    
    serch_index(head,find);





    }

    

    
    return 0;
}