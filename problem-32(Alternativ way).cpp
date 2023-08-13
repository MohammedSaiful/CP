#include<bits/stdc++.h>
using namespace std;

// eita  time ney onk

int main()
{
    int t,i,j;
    long long int a,b,c,num;
    cin>>t;
    for(i=1;i<=t; i++)
    {
        cin>>a>>b>>c;
        while(a<=b)
        {
            if(a%c==0)
            {
                cout<<a<<endl;
                a+=c;
                continue;
            }
            a++;
        }
        cout<<"\n";
    }
    return 0;
}
