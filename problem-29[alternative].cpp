#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,j,k;
    long long n,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        sum=1;
        k=sqrt(n);
        for(j=2; j<=k; j++)
        {
            if(n%j==0)
            {
                sum+=j+n/j;
            }

        }
        if(sum==n)
        {
            cout<<"YES, "<<n<<" is a perfect number!";
        }
        else cout<<"NO, "<<n<<" is not a perfect number!";
        if(i<t)cout<<"\n";
    }
    return 0;
}
