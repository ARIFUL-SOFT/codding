#include<bits/stdc++.h>
using namespace std;
int sumvector(vector<int>a,vector<int>b,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    b.insert(b.begin()+n,a.begin(),a.end());
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    
    sumvector(a,b,n);
    return 0;
}