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
        long long int a,b,c;
        cin>>a>>b>>c;

        long long int ans ;
        long long int x = a+c;
        if(a+c>b && (abs(x-b)>abs(a-b)))
        {
            ans = (a+c)-b;
        }
        else{
            ans= abs(a-b);
        }
        cout<<ans<<endl;
    }
    return 0;
}