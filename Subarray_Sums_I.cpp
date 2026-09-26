#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
         cin>>v[i];

    int l=0,r=0,sum=0;
    int cnt=0;
    while(r<n)
    {
        sum+=v[r];
        while(sum>k)
       {
        sum-=v[l];
        l++;
       }
        if(sum==k)
        {
            cnt++;
        }
      
       r++;
         
    }
    cout<<cnt<<endl;
    return 0;
}