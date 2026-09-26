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
        string s ,x;
        cin>>s;

        if(s[0]=='1')
        {
            int ans=0;
            for(int i=1;i<n;i++)
            {
                if(s[i]=='0')ans++;
            }
            cout<<ans<<endl;
            continue;
        }
        else{
            vector<int>preSum(n+1),suffSum(n+2);
            for(int i=1;i<n;i++)
            {
                preSum[i] += preSum[i-1];
                if(s[i]=='1')
                {
                    preSum[i]++;
                }
            }
            for(int i=n-1;i>=0;i--)
            {
                suffSum[i]+=suffSum[i+1];
                if(s[i]=='0')
                {
                    suffSum[i]++;
                }
            }

            int ans= INT_MAX;
            for(int i=0;i<n;i++)
            {
                int current = preSum[i]+suffSum[i+1];
                ans = min(ans,current);
            }

            cout<<ans<<endl;
        }

       
    }
    return 0;
}