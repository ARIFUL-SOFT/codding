#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
    int roll;
    char name[50];
    float result;
    /* data */
};


int main()
{
    struct Student s1;
    struct Student *ptr = &s1;
    
    return 0;
}