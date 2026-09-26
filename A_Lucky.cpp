#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<s.size()/2;i++)
        {
            a=a+(int)s[i];
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            b=b+(int)s[i];
        }
        if(a==b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}