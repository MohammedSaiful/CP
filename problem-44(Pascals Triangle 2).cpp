#include<bits/stdc++.h>
using namespace std;

long long int arr[51][51];
void pascal()
{
    int i,j;
    arr[0][0]=1;
    arr[1][0]=1;
    arr[1][1]=1;

        for(j=2; j<=50; j++)
        {
            arr[j][0]=1;
            for(i=1; i<j; i++)
            {
                arr[j][i]=arr[j-1][i-1]+arr[j-1][i];
            }
            arr[j][i]=1;
        }
}
int main()
{
    int t,n,i,j,k;
    pascal();
    cin>>t;

    for(k=1; k<=t; k++)
    {
        cin>>n;
        for(j=0; j<=n; j++)
        {
           // arr[j][0]=1;
            for(i=0; i<=j; i++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
