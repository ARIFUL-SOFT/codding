#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>p(n,0);
    p[0]=v[0];
    for(int i=1;i<n;i++)
    {
        p[i]=v[i]+p[i-1];
    }
    for(int i=1;i<n-1;i++)
    {
        if(p[i-1]==(p[n-1])-p[i])
        {
            cout<<i;
        }

    }
    return 0;
}