#include<stdio.h>
#include<string.h>
struct Student

{
    int roll;
    char name[50];
    float result;
    /* data */
};

int main()
{
    struct Sudent s[5];
    for(int i=0;i<5;i++)
    {
        printf("input ");
        scanf("%d",&s[i].roll);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].result);

    }
    for(int i = 0;i<5;i++)
    {
        printf(" %d\n %s\n%.2f\n",s[i].roll,s[i].name,s[i].result);
    }

}
