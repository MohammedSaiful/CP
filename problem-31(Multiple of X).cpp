/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    long long int a,b,num;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<"Invalid!\n";            //using while loop

        }
        else
        {
            num=a;
            while(a<=b)
            {
                cout<<a<<"\n";
                a+=num;
            }
        }
        cout<<"\n";
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    long long int a,b,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<"Invalid!\n";

        }
        else
        {
            for(j=a; j<=b; j+=a)   // uisng for loop
            {
                cout<<j<<"\n";
            }
        }
        cout<<"\n";
    }
    return 0;
}
