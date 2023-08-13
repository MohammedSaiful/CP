#include<bits/stdc++.h>
using namespace std;
/*
int arr[1000001];
void prime()
{
    int i,j,k,num;
    num=sqrt()
    for(i=2; i< )
}*/

int main()
{

    int t,i,cnt;
    long long int j,k,x,root;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>x;
        cnt=0;
        //root=sqrt(x);
        for(j=2; j*j<=x; j++)
        {
                if(x%j==0)
                {
                    cnt++;
                    break;
                }
        }
        if(cnt==1)
        {
            cout<<x<<" is not a prime";
        }
        else
            cout<<x<<" is a prime";

        cout<<endl;
    }
    return 0;
}
