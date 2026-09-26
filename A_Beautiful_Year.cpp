#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    while(y)
    {
        y++;
        int x=y;
        int a[4],i=0;
        while(x)
        {
            a[i]=x%10;
            x=x/10;
            i++;
        }
        int found =0;
        for(int j=0;j<4;j++)
        {
            
            for(int k=j+1;k<4;k++)
            {
                if(a[j]==a[k])
                {
                    found =1;
                    break;
                }

            }
            if(found ==1)
            {
                break;
            }
        }
        if(found ==0)
        {
            cout<<y;
            return 0;
        }
   }
    return 0;
}