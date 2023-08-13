#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,cnt,siz;
    string str;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str;
        siz=str.size();
        for(j=0; j<siz; j++)
        {
            if(str[j]=='L')
            {
                str[j]=str[j-1];
            }
            else if(str[j]=='R')
            {
                str[j]=str[j+1];
            }
        }
        cout<<str;
        cout<<endl;
    }
    return 0;
}
