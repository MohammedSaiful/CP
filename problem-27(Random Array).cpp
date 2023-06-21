#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,cnt,lnt,size;
    cin>>t;
    for(i=1;i<=t; i++)
    {
        cin>>size;
        int arr[size];
        for(j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        cnt=lnt=0;
        for(k=0; k<size-1; k++)
        {
            if(arr[k]>arr[k+1])
            {
                cnt++;
            }
            else if(arr[k]<arr[k+1])
            {
                lnt++;
            }

            //else cnt=lnt=0;
        }
       // cout<<"cnt: "<<cnt<<endl;
        if(cnt==(size-1) || lnt==(size-1))cout<<"YES";
        else cout<<"NO";
        if(i<t)cout<<"\n";
    }
    return 0;
}
