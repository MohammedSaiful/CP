#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,j,k,a,num;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        num=0;
        while(a!=0)
        {
            num=(num*10)+(a%10);
            a=a/10;
        }
        cout<<num;
        if(i<t)
        cout<<"\n";
    }
    return 0;
}
