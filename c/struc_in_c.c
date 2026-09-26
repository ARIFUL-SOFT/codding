#include<stdio.h>
#include<string.h>
struct student

{
    int roll;
    char name[50];
    float result;
    /* data */
};

int main()
{
    struct student s1={10,"abcd",3.14};

    printf("%d\n%s\n%f\n",s1.roll,s1.name,s1.result);
    struct student s2;
    s2.roll =11;
    strcpy(s2.name,"arif");
    s2.result = 3.7;

    printf("%d\n%s\n%.2f\n",s2.roll,s2.name,s2.result);


}
