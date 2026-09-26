#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
         int n=0;
        for(int i=x;i>y;i--)
        {
            n = n+ ceil((float)i/10.0);
           
        }
        cout<<n<<endl;
    }
    return 0;
}