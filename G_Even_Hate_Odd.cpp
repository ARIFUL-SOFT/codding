#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                e++;
            }
            else 
            {
                o++;
            }
        }
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<abs(e-(n/2))<<endl;
        }
    }
    return 0;
}