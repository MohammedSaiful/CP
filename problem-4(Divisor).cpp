#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i,j;
    cin>>T;
    if(0<T && T<=10)
    {
        for(i=1; i<=T; i++)
        {
            cin>>N;
            if(N<=100000)
            {
            cout<<"Case "<<i<<": ";
            for(j=1; j<=N; j++)
            {
                if(N%j==0)
                {
                    cout<<j<<" ";
                }
            }
            if(i<T)
            {
                 cout<<endl;
            }
            }
        }
    }
    return 0;
}
