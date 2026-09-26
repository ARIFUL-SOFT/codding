#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int n=3;

    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not availavle\n");
        return 1;
    }


    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    n=5;
    arr=(int*)realloc(arr,n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory not availavle\n");
        return 1;
    }
    for(int i=3;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("number %d\n",arr[i]);
    }

    free(arr);

}