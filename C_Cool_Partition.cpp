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
        vector<int>v(n);

        for(int i=0;i<n;i++)
            cin>>v[i];

        set<int>pre_seg,cur_seg;
        pre_seg.insert(v[0]);

        int ans=1;
        for(int i=1;i<n;i++)
        {
            int val= v[i];
            if(pre_seg.find(val) != pre_seg.end())
            {
                pre_seg.erase(val);
            }
            cur_seg.insert(val);
            if(pre_seg.empty())
            {
                ans++;
                pre_seg = cur_seg;
                cur_seg.clear();

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}