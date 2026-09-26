#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0;
    int x=n;
    while(n)
    {
        if(n%10!=4 && n%10!=7)
        {
            flag=1;
            break;
        }
        n=n/10;
    }
    int arr[]={4,7,44,47,77,74,444,447,474,477,747,744,777,774};
    if(flag==1)
    {
        int m=0;
        for(int i=0;i<n;i++)
        {
            if(x%arr[i]==0 && arr[i]>x)
            {
                cout<<"YES\n";
            m=1;
            break;
            }
       
        

        }
        if(m==0)
        {
            cout<<"NO\n";
        }

    }
    else{
        cout<<"YES\n";
    }
    return 0;
}