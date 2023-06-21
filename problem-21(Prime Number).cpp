#include<bits/stdc++.h>
using namespace std;

#define max 100001
char ch[max];

void prime()
{
    int i,j;
    for(i=0; i<max; i++)
    {
        ch[i]=1;
    }
    int rooot=sqrt(max);
    for(i=2; i<=rooot; i++)
    {
        if(ch[i]==1)
        {
            for(j=2; i*j<=max; j++)
            {
                ch[i*j]=0;
            }
        }
    }
}

int main()
{
    prime();
    int cnt,i,a,b,t,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;

        cnt=0;
        for(k=a; k<=b; k++)
        {
            if(ch[k]==1)
            {
                cnt++;
            }
        }
        cout<<cnt;
        if(i<t)cout<<endl;
    }
    return 0;
}
