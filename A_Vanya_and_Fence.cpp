#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=ceil((double)a[i]/h);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    cout<<sum;
    return 0;
}