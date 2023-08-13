#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t,k,p,q,c;
    long long int n,mod;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>p>>q>>c;
        mod=p;
        for(j=1; j<q; j++)
        {
            mod=(mod*p)%c;
        }
        cout<<"Result = "<<mod;

        cout<<endl;
    }
    return 0;
}
