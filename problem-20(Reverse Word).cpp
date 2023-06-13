#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    string str;
    cin>>t;
    cin.ignore();
    for(i=1; i<=t; i++)
    {
        cin>>str;
        for(j=str.length()-1; j>=0; j--)
        {
            cout<<str[j];
        }
        if(i<t)cout<<endl;
    }
    return 0;
}
