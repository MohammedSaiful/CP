#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,k,a,x,sum;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        sum=0;
        k=a;
        while(a>0)
        {
            x=a%10;
            sum+=x*x*x;
            a=a/10;
        }

        if(sum!=k)cout<<k<<" is not an armstrong number!";
        else cout<<k<<" is an armstrong number!";
        if(i<t)cout<<"\n";
    }

    return 0;
}
