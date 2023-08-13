#include<bits/stdc++.h>
using namespace std;

/// amar motee thik aseee. but judge e vul dekhay


int main()
{
    int t,i,j,k;
    string str;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str;
        j=0;
        for(j=str.length()-1; j>=0; j--)
        {
            if(str[j]!='0')break;
        }
        for(k=j; k>=0; k--)
            cout<<str[k];

        if(i<t)
        cout<<"\n";
    }
    return 0;
}
