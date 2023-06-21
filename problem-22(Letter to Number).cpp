#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    string str;
       // char ch='A';
       // cout<<ch-64;
    cin>>t;
    cin.ignore();


    for(i=1; i<=t; i++)
    {
        cin>>str;
        for(j=0; j<str.length(); j++)
        {
            cout<<str[j]-64;
        }
        if(i<t)cout<<endl;
    }
    return 0;
}
