#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
       long long int sum=v[r]-v[l-1];
        
       if(q==0)
       {
         cout<<sum;
       }
       else{
         cout<<sum<<endl;
       }
    }
    return 0;
}