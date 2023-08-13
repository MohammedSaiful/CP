#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    int t,i,k,l,a,b,c;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        vector<int> v;
        cin>>a;
        int arr1[a];
        k=0;
        for(int j=0; j<a; j++)
        {
            cin>>arr1[j];
            v.push_back(arr1[j]);

        }
        cin>>b;
        int arr2[b];
        for(int j=0; j<b; j++)
        {
            cin>>arr2[j];
            v.push_back(arr2[j]);

        }
        c=v.size();
        for(k=0; k<c; k++)
        {
            int temp;
            for(l=1; l<c-k; l++)
            {
                if(v[l-1]>v[l])
                {
                    temp=v[l-1];
                    v[l-1]=v[l];
                    v[l]=temp;
                }
            }
        }
        for(int j=0; j<c;j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
