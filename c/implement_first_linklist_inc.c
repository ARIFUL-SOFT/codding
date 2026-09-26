#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};


int main()
{
    struct Node *head = NULL,*temp,*newnode;
    int  i,value;
    

    for(i=0;i<3;i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        if(newnode==NULL)
        {
            printf("memory not available");
            return 1;
        }

        printf("Enter the value for node %d:",i+1);
        scanf("%d",&value);

        newnode->data=value;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;

        }

        else{
            temp->next=newnode;
            temp = newnode;
        }





    }


    //now i want to print the node value
    temp = head;
    printf("Linllist value:\n");

    while (temp!=NULL)
    {
       printf("%d\n",temp->data);
       temp=temp->next;
        /* code */
    }

    temp=head;
    while(temp!=NULL)
    {
        struct Node *newextra=temp->next;
        
        free(temp);
        temp=newextra;
    }
    



}
