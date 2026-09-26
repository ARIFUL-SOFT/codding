#include<stdio.h>
#include<string.h>
struct Student

{
   int id;
   char name[50];
   float result ;/* data */
};

int main()
{
    struct Student s[5];
    for(int i=0;i<3;i++)
    {
    printf("Enter value for student %d\n",i+1);
    printf("id:");
    scanf("%d",&s[i].id);

    printf("name:");
    scanf("%s",s[i].name);

    printf("result:");
    scanf("%f",&s[i].result);

    }


    for(int i=0;i<3;i++)
    {
    printf("value for student %d\n",i+1);
    printf("id:%d\n",s[i].id);
    

    printf("name:%s\n",s[i].name);
    

    printf("result:%f\n",s[i].result);
    
    
    }
}

