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
        set<int>s;
        map<int ,vector<int> >mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x].push_back(x);
            s.insert(x);
        }
       

        auto it = s.rbegin();
        while(!mp.empty())
        {
            auto x = mp[*it].size();
            for(int j=0;j<x;j++)
            {
                
            }
        }


    }
    return 0;
}