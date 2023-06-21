
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,N,a,b;
    long long int cnt;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        N=0;
        if(a>b) N=b;
        else if(a<b) N=a;
          // cout<<N<<endl;
           cnt=1;
        for(j=2; j<=N; j++)
        {
            //cout<<j<<endl;
            if(a%j==0 && b%j==0)
            {
               // cout<<"If> "<<j<<endl;
                //cout<<j<<"L"<<a<<" "<<b<<endl;
                a=a/j;
                b=b/j;

                cnt=cnt*j;
               // cout<<"cnr: "<<cnt<<endl;
                j=1;
            }
            //cout<<"NON-If> "<<j<<endl;
        }
        cnt=cnt*a*b;
            cout<<"LCM = "<<cnt;
        if(i<t)cout<<endl;
    }
    return 0;
}
