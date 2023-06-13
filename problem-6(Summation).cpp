#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,N,M,K;
   /* string s;
    cin>>s;
    M=(s[0]-48) + (s[s.length()-1]-48); //alternative way
    cout<<N<<endl;
    cout<<s[0]<<endl;
    cout<<s.length()<<endl;*/

    cin>>T;
    if(0<T && T<=10000)
    {
        for(i=1; i<=T; i++)
        {
            cin>>N;
            K=N%10;
            if(10000<=N && N<=99999)
            {
                while(N>0)
                {
                    M=N%10;
                   // cout<<M<<endl;
                    N=N/10;
                }
                cout<<"Sum = "<<M+K;
            if(i<T)
            {
                cout<<endl;
            }
            }
        }

    }
    return 0;
}
