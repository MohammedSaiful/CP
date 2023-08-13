#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,n,cnt;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        int arr[n-1];
        for(l=1; l<=n-1; l++)
        {
            arr[l]=0;
        }

        for(l=1; l<=n-1; l++)
        {
            cin>>k;
            arr[k]=1;
        }
        for(j=1; j<=n-1; j++)
        {
            if(arr[j]==0)
            {
                cout<<j;
                break;
            }
        }

        //cnt=0;

        cout<<endl;
    }
    return 0;
}
