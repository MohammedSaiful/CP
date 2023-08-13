#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    long long int a,b,c,num,j;
    cin>>t;
    for(i=1;i<=t; i++)
    {
        cin>>a>>b>>c;

        num=a*b;
        for(j=num; j<=c; j+=num)
        {
            cout<<j<<endl;
        }
        cout<<"\n";
    }
    return 0;
}
