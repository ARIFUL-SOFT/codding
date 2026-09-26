#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio();
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans = n-v[0];
        cout<<ans<<endl;
    }
    return 0;
}