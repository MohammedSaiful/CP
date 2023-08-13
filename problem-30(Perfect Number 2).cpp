#include<bits/stdc++.h>
using namespace std;

    // prochur time lageeeeee. question tao beshi ekta shubidhar naa

int main()
{
    int t,i,j,k,l;
    long long n,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;

        for(k=2; k<=n; k++)
        {
            sum=1;
            l=sqrt(k);
            for(j=2; j<=l; j++)
            {
                if(k%j==0)
                {
                    sum+=j+k/j;
                }

            }
            if(sum==k)
            {
                cout<<k<<endl;
            }
        }
        cout<<"\n";
    }
    return 0;
}
