#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =0,ct=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        if(s[i]=='D')
        {
            ct++;
        }
    }
    if(count>ct)
    {
        cout<<"Anton\n";
    }
    else if(count<ct)
    {
        cout<<"Danik\n";
    }
    else if(count==ct)
    {
        cout<<"Friendship\n";
    }
    return 0;
}