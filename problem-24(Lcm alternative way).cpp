
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // multiplication of 2 numbers = GCD of them X LCM of them
    int t,i,j,a,b,mod,multi;
    long long int cnt;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        multi=a*b;
        while(b!=0)
        {
            mod=a%b;
            a=b;
            b=mod;
        }

        cnt=multi/a;

        cout<<"LCM = "<<cnt;
        if(i<t)cout<<endl;
    }
    return 0;
}
