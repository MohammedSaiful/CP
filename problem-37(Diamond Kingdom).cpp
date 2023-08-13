#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,m,i,j,k,cnt;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>m;
        for(j=1; j<n; j++)
        {
            for(k=1; k<=j; k++)
            {
                cout<<m;
                if(k!=j)cout<<" ";
            }
            cout<<endl;
        }
        for(j=n; j>0; j--)
        {
            for(k=1; k<=j; k++)
            {
                cout<<m;
                if(k!=j)cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
