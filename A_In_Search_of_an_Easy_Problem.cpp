#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            f=1;
        }
    }
    if(f==1)
    {
        cout<<"HARD\n";
    }
    else
    {
        cout<<"EASY\n";
    }
    return 0;
}