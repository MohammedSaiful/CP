
#include<bits/stdc++.h>
using namespace std;

char arr[100001];
int main()
{
    int i,j,n,k,cnt;

    cin>>n;

    for(i=2; i*i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(j=i*i; j<=n; j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(k=1; k<=n; k++)
    {
        if(arr[k]!=1)
        {
            cout<<k<<endl;
        }
    }
    return 0;
}
