#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t,k,cnt;
    double a;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        cnt=0;
        while(a!=0)
        {
            k=a;
            a=k/2;
           // cout<<"a:>"<<a<<"  k:>"<<k<<endl;
            cnt++;
        }
        cout<<cnt<<" days";

        if(i<t)cout<<endl;
    }
    return 0;
}
