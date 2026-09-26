#include<stdio.h>
void merge(int arr[],int l,int mid,int r)
{
    int n1= mid - l + 1 ;//left thake mid porjonto joto tuki acey. aikhane 1 vasi karon index array size thake 1 vasi nite hoi
    
    int n2= r-mid;//mid thake right porjonto joto tuku array acey

    int L[n1],R[n2];

    //left sub array
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }

    //right sub array
    for(int i=0;i<n2;i++)
    {
        R[i]=arr[mid+1+i];
    }

    //sort and merge the array
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
            
        }
        else{
            arr[k]=R[j];
            j++;
           
        }
         k++;
    }

    //left sub array te jodi kono element akon o roye jai
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
        
    }

    //right sub array te jodi kono element thake jai
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }

    
}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)//jotokhon l r thake choto hobe totokhon ai sort tha cholbe
    {
        int mid=l+(r-l)/2;
        //go for left sub array
        merge_sort(arr,l,mid);

        //go for right sub array
        merge_sort(arr,mid+1,r);

        //now merge && sort the subarray 
        merge(arr,l,mid,r);

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}