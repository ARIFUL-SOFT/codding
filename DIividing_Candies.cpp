#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]%x==0)
            {
                flag = 1;
                cout<<v[i]<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"0"<<endl;
        }
    }
    

    return 0;
}