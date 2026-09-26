#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(j==i+1)
            {
                cout<<"\\";
            }
            else if(j==n-i)
            {
                cout<<"/";
            }
            else{
                cout<<" ";
            }

        }
        cout<<"\n";

    }
    for(int i=0;i<n/2;i++)
    {
        cout<<" ";
    }
    cout<<"X"<<endl;
    for(int i=n/2;i>0;i--)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            if(j==i)
            {
                cout<<"/";
            }
            else if(j==(n-i+1))
            {
                cout<<"\\";
            }
            else{
                cout<<" ";
            }

        }
        cout<<"\n";



    }

    return 0;
}