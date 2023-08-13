

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i,j;

    cin>>T;
    if(1<=T && T<=100)
    {
        for(i=1; i<=T; i++)
        {
            cin>>N;
            if(0<=N && N<=15)
            {
                if(N==0)
                {
                    cout<<N;
                }
                else
                {
                    long long int mul=1;
                    for(j=N; j>0; j--)
                    {
                        mul=mul*j;
                        mul=mul;
                    }
                    cout<<mul;
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
