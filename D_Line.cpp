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
        string s;
        cin>>s;
        vector<int>left,right;

        long long sum=0;

        for(int i=0;i<n;i++)
        {
            if(i<(n/2) && s[i]=='L')
            {
                right.push_back(i);
            }
            else{
                left.push_back(i);
            }

            if(s[i]=='L')
            {
                sum+=i;
            }
            else{
                sum+=(n-i-1);
            }
        }
        
    }
    return 0;
}