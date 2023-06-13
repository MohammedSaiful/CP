

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i;

    cin>>T;
     if(1<=T && T<=100)
    {
        for(i=1; i<=T; i++)
        {
            int count=0;
            int temp=5;
            cin>>N;
            while(temp<=N)
            {
                count=count+(N/temp);
                temp=temp*5;
            }
            cout<<count;

            if(i<T)
            {
                cout<<endl;
            }
            }
        }
    return 0;
}
