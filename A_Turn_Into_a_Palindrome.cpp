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
        char c;
        cin>>c;
        string s;
        cin>>s;

        int cnt =0;
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                if(s[i]!=c)
                {
                    cnt++;
                }
                if(s[j]!=c)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}