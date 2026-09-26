#include<stdio.h>

void swap(int *a,int *b);

int partition(int arr[],int start,int end)
{
    int pos=start;//akebarey surur element tare pos dore nibo
    //jodi pos ar sathe kono tah swap kore tahole ami pos barabo
    for(int i=start;i<=end;i++)
    {
        //if ith arr is smaller or equal to pivot of the array
        //then swap korbo arr ar oi element or tar position ar maje
        if(arr[i]<=arr[end])
        {
            swap(&arr[i],&arr[pos]);
            pos++;//pos agai jabe
        }
    }
    return pos-1;
}

void quick_sort(int arr[],int start,int end)
{
    if(start<end)
    {
    //pivot niteci but last thake
    int pivot=partition(arr,start,end);

    //left side pivot ar
    quick_sort(arr,start,pivot-1);

    //right side pivot ar
    quick_sort(arr,pivot+1,end);
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int arr[]={5,6,2,7,8,3,1,4};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    
    quick_sort(arr,0,arr_size-1);

    for(int i=0;i<arr_size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}