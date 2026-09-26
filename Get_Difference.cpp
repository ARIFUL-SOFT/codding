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
void  find_min_max(Node* head,int &mini,int &maxm)
{
    Node * tmp= head->next;
    while(tmp)
    {
        mini = min(mini,tmp->val);
        maxm = max(maxm,tmp->val);
        tmp = tmp->next;

    }
    cout<<maxm-mini<<endl;
}


int main()
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

    int mini= head->val;
    int maxm= head->val;

    find_min_max(head,mini,maxm);

    
    return 0;
}