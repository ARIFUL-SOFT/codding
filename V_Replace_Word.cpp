#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size(); )
    {
        if(s.substr(i,5)=="EGYPT")
        {
            cout<<" ";
            i+=5;
        }
        else{
            cout<<s[i];
            i++;
        }


    }
    return 0;
}