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
        for(auto &i:v)
            cin>>i;
        string s;
        cin>>s;
        deque<long long int>dq;
        long long inver = 0,zero = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==0) zero++;
            else{
                dq.push_front(zero);
                inver+=zero;
            }
        }

        vector<long long >ans;
        ans.push_back(inver);
        int rev=0;
        for(int i=0;i<n;i++)
        {
            if(dq.empty())
            {
                ans.push_back(0);
                continue;
            }
            if(s[i]=='1')//forword
            {
                int mx = dq.front()-rev;
                inver-=mx;
                dq.pop_front();
            }
            else{
                while(!dq.empty() && dq.back()<=rev)
                {
                    dq.pop_back();
                }
                rev++;
                int pos = dq.size();
                inver-=pos;
            }
            ans.push_back(inver);
        }

        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
}