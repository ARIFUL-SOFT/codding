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
        vector<int>v(n+1);
        v[0]=0;
       for(int i=1;i<=n;i++)
       {
        cin>>v[i];
       }

       //aktah prefix sum arry ni 
        vector<long long int>preSum(n+1);
        preSum[0]=v[0];
        for(int i=1;i<=n;i++)
        {
            preSum[i]=v[i]+preSum[i-1];

        }
        string s;
        cin>>s;
        s= "#"+s;
        long long int sum=0;

        int l=1,r=n;
        while(l<r)
        {
            if(s[l]=='L')
            {
                if(s[r]=='R')
                {
                    // for( int i=l;i<=r;i++)
                    // {
                    //     sum+=v[i];
                    // }
                    sum+=(preSum[r]-preSum[l-1]);

                    l++;
                }
                r--;
            }
            else{
                l++;

            }
           
        }
        cout<<sum<<endl;

    }
    return 0;
}