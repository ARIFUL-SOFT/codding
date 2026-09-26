#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr ,i,sum=0;
    arr=(int*)malloc(10*sizeof(int));
    if(arr==NULL)
    {
        printf("memory allocation failed\n");
        return 1;
    }

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum value is: %d",sum);
    free(arr);
}