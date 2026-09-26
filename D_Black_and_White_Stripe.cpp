
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
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        int b=0,w=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='B')b++;
            else w++;
        }
        int ans = w;

        for(int i=0;i+k<n;i++)
        {
            if(s[i]=='B')b--;
            else w--;

            if(s[i+k]=='B')b++;
            else w++;

            ans= min(ans,w);
        }
        cout<<ans<<endl;
    }
    return 0;
}