#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin>>a;
    if(strlen(a)<7)
    {
        cout<<"NO";
        return 0;
    }
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        int j=a[i];
        int m=1;
        for(int k=i+1;k<n;k++)
        {
            if(j==a[k])
            {
                m++;
            }
            else
            {
                break;
            }
        }
        if(m>=7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}