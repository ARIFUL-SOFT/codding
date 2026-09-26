#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[26]={};
        for(int i=0;i<n;i++)
        {
            a[s[i]-'A']++;
        }
        int sum=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]==1)
            {
                sum=sum+2;
            }
            else if(a[i]>1){
                sum = sum+a[i]+1;
            
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}