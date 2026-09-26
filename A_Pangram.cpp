#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<n;i++)
    {
        if(s[i]<'a')
        {
            s[i]=s[i]+32;
        }
    }

    for(int i=0;i<n;i++)
    {
        v[s[i]-'a']++;
    }

    int flag =0;
    for(int i=0;i<26;i++)
    {
        if(v[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    return 0;
}