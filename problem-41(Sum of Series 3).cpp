#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t,k,n;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        for(j=n; j>1; j--)
        {
            cout<<"2^"<<j<<" + ";
        }
        if(n>=1)
            cout<<"2 + 1";
        else
            cout<<"1";
        cout<<endl;
    }
    return 0;
}
