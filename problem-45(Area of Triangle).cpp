#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    double sum,x,y,z,sol;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>x>>y>>z;

            sol=(x+y+z)/2;

            sum=sqrt(sol*(sol-x)*(sol-y)*(sol-z));

        cout<<fixed<<setprecision(3);
        cout<<"Area = "<<sum<<endl;
    }


    return 0;
}
