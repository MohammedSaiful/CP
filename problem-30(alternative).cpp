#include<bits/stdc++.h>
using namespace std;

    // prochur time lageeeeee. question tao beshi ekta shubidhar naa

int main()
{
    int t,i,j;
    long long int k;
    int arr[]={6,28,496,8128,33550336};
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>k;
        for(j=0;j<5;j++)
        {
            if(arr[j]<=k)
            {
                cout<<arr[j]<<"\n";
            }
        }
        cout<<endl;
    }

    return 0;
}
