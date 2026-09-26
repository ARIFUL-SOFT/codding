#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>a(n);
    vector<int>b(m);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    int l=0,r=0,cnt=0;

    while(r<m)
    {
        if(a[l]<b[r] && (l<n))
        {
            cnt++;
            l++;
        }
        else{
            cout<<cnt<<" ";
            r++;
        }
    }

    return 0;
}