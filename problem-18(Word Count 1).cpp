#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,cnt;
    string str;
    cin>>t;
    cin.ignore();
    for(i=1; i<=t; i++)
    {
        getline(cin,str);
        cnt=1;

        for(j=0; j<str.length(); j++)
        {
            if(str[j]==' ')
            {
                cnt++;
                //cout<<cnt<<endl;
            }
        }
        cout<<"Count = "<<cnt;

        if(i<t)cout<<endl;
    }
    return 0;
}
