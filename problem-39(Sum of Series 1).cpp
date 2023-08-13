#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,x,k;
    long long int sum,mul;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>x>>k;
        sum=1;
        mul=1;
        for(j=1; j<=k; j++)
        {
            mul=mul*x;
            sum=sum+mul;

        }
        cout<<"Result = "<<sum;
        cout<<endl;
    }

    return 0;
}
