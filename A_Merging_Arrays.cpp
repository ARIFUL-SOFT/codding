#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    int l=0,r=0;
    
  while(l<n && r<m)
  {
     if(a[l]<=b[r])
        {
            cout<<a[l]<<" ";
            l++;
        }
        else{
            cout<<b[r]<<" ";
            r++;
        }
  }
  if(l==n)
  {
    for(int i=r;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
  }
  if(r==m)
  {
    for(int i=l;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
  }
  cout<<endl;

    return 0;
}