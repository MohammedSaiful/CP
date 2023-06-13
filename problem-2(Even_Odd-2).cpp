#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[101];
    int n,i,j;
    cin>>n;

    if(1<=n && n<=100)
    {
    for( i=0; i<n; i++)
    {
        cin>>arr;
        if(arr[strlen(arr)-1]%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
       // cout<<arr[i];

    }
    }
    return 0;
}
