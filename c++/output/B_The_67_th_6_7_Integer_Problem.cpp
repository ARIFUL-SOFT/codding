#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a[7];
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
        }
        int max=a[0],n=0;
        for(int i=0;i<7;i++)
        {
            if(max<a[i])
            {
               max=a[i];
                n=i;
            }
        }
        int sum=0;
        for(int i=0;i<7;i++)
        {
            if(i!=n)
            {
                sum=sum-a[i];
            }

        }
        sum=sum+a[n];
        cout<<sum<<endl;

    }

     return 0;
}
