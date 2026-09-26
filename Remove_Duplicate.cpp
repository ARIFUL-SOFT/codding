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



void delete_duplicate(Node* &head)
{
    Node *curr =head;
    while(curr!=NULL)
    {
        Node* tmp = curr;
        while(tmp->next!=NULL)
        {
            if(tmp->next->val==curr->val)
            {
                Node* deletenode = tmp->next;
                tmp->next= tmp->next->next;
                delete deletenode;
            }
            else{
                tmp=tmp->next;
            }
        }
        curr=curr->next;
    }
    

}
void print_link_list(Node* head)
{

    Node* tmp=head;
    while(tmp)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
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

    delete_duplicate(head);

    print_link_list(head);

    

    
    return 0;
}