#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i,j,k;

    cin>>T;
    if(0<T && T<=25)
    {
        for(i=1; i<=T; i++)
        {
            cin>>N;
            if(0<N && N<=80)
            {
                for(k=1; k<=N; k++)
                {
                    for(j=1; j<=N; j++)
                    {
                       cout<<"*";
                    }
                    if(k<N)
                    {
                        cout<<endl;
                    }
                }
                if(i<T)
                {
                   cout<<endl;
                   cout<<endl;
                }
            }
        }
    }
    return 0;
}
