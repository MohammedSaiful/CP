#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i,a,b;
    int arr[4];
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>N;
        a=b=sqrt(N);
        if((a*b)==N)
        {
            cout<<"YES";
            if(i<T)
            {
                cout<<endl;
            }
        }
        else
        {
            cout<<"NO";
            if(i<T)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
