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

void is_equal(Node* head,Node* head2,int x,int y)
{
    if(x!=y)
    {
        cout<<"NO\n";
        return ;
    }
    int flag =0;
    Node * tmp=head,*tmp2=head2;
    while(tmp)
    {
        if(tmp->val != tmp2->val)
        {
            flag = 1;
            break;
        }
        tmp= tmp->next;
        tmp2 = tmp2->next;
    }
    if(flag == 0)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}



int main()
{
    int val;
    Node *head = NULL;
    Node*tail = NULL;
    int list_x= 0;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        list_x++;
        insert_at_tail(head,tail,val);
    }

    int val2;
    int list_y= 0;

    Node *head2 = NULL;
    Node*tail2 = NULL;
    while(true)
    {
        cin>>val2;
        if(val2==-1)
        {
            break;
        }
        list_y++;
        insert_at_tail(head2,tail2,val2);
    }
    

    is_equal(head,head2,list_x,list_y);
    


    
    return 0;
}