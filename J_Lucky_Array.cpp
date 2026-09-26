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
    sort(a,a+n);
    int j=1;
    for(int i=1;i<n;i++)
    {
        if(a[0]==a[i])
        {
            j++;
        }

    }
    if(j%2!=0)
    {
        cout<<"Lucky";
    }
    else
    {
        cout<<"Unlucky";
    }
    return 0;
}