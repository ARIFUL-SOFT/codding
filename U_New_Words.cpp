#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t="egypt";
    int co[5]={};
    transform(s.begin (),s.end(),s.begin (),::tolower);
    for(int i=0;i<5;i++)
    {
    for(int j=0;j<s.size();j++)
    {
    if(t[i]==s[j])
    {
    co[i]++;
    
    }
    }
    }
    int mix=co[0];
    for(int i=1;i<5;i++)
    {
    mix=min(co[i],mix);
    }
    
    cout<<mix<<endl;
    return 0;
}