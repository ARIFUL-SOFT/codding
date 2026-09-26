#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    char b[101];
    cin>>a;
    cin>>b;
    int n=strlen(a);
    int m=strlen(b);
    if(n==m)
    {
        for(int i=0,j=m-1;i<n,j>=0;i++,j--)
        {
            if(a[i]!=b[j])
            {
                cout<<"NO";
                return 0;
            }
            
        }
    }
    else{
        cout<<"NO";
        return 0;
    }
    cout<<"YES";

    return 0;
}