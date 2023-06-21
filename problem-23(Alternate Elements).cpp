
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,siz;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>siz;
        int arr[siz];
        for(j=0; j<siz; j++)
        {
            cin>>arr[j];
        }

        for(k=0; k<siz; k=k+2)
        {
            cout<<arr[k]<<" ";
        }

        if(i<t)cout<<endl;
    }
    return 0;
}
