#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,j,k,size;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>size;
        string str[size],temp;
        for(j=0;  j<size; j++)
        {
            cin>>str[j];
        }

        for(j=0;  j<size-1; j++)
        {
            for(k=1; k<size-j; k++)
            {
                if(str[k-1]>str[k])
                {
                    temp=str[k-1];
                    str[k-1]=str[k];
                    str[k]=temp;
                }
            }
        }
        for(k=0; k<size; k++)
        {
            cout<<str[k]<<endl;
        }

           // cout<<"\n";
    }
    return 0;
}
