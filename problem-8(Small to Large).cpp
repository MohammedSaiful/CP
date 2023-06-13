#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,k,temp;
    int arr[4];
    cin>>T;

    for(i=1; i<=T; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[j];
        }
        for(k=0; k<3; k++)
        {
            for(j=0; j<3; j++)
            {
                if(arr[k]<arr[j])
                {
                    temp=arr[k];
                    arr[k]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<"Case "<<i<<":";
        for(j=0; j<3; j++)
        {
            cout<<" "<<arr[j];
        }
        if(i<T)
        {
           cout<<endl;
        }
    }
    return 0;
}
