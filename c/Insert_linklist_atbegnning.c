#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
    struct Node *next;/* data */
};



int main()
{
    struct Node *head = NULL ,*temp,*newNode;

    int i,value;

    for(i=0;i<3;i++)
    {
        newNode=(struct Node*)malloc(sizeof(struct Node));
        if(newNode==NULL)
        {
            printf("memory not available\n");
            return 1;
        }

        printf("enter the value node:%d",i+1);
        scanf("%d",&value);

        newNode->data = value;
        newNode->next=NULL;

        if(head == NULL)
        {
            head=newNode;
            temp=newNode;
        }

        else{
            temp->next=newNode;
            temp = temp->next;
        }


    }

    temp = head;
    while (temp)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }

temp = head;
while(temp)
{
    struct Node*newx = temp->next;
    free(temp);
    temp= newx;
}


}
