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
        if(a>c)
        {
            if(a%c!=0)
            {
                num=a%c;
                a-=num;
                a+=c;
            }
        }
        else if(a<=c)
        {
            num=c-a;
            a+=num;
        }
        for(j=a; j<=b; j+=c)
        {
            cout<<j<<endl;
        }
        cout<<"\n";
    }
    return 0;
}
