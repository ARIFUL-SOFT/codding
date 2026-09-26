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
        // deque<char>dq;
        string s;
        cin>>s;
        int l=0,r=n-1,ans=n;
        while(l<=r)
        {
            if(s[l]==s[r])
            {
                break;
            }
            else{
                ans-=2;
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
        // for(int i=0;i<n;i++)
        // {
            
        //     dq.push_back(s[i]);
        // }
        // while(!dq.empty())
        // {
        //     if(dq.front()==dq.back())
        //     {
        //         break;
        //     }
        //     else{
        //         dq.pop_back();
        //         dq.pop_front();
        //     }
        // }
        // cout<<dq.size()<<endl;
    }
    return 0;
}