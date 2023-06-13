#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,k,cnt;
    string str;
    string str1;
    cin>>T;
    cin.ignore();
    for(i=1; i<=T; i++)
    {
        getline(cin,str);

        for(j=0; j<str.length(); j++)
        {
            //cout<<str[j]<<endl;
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
            {
                cout<<str[j];
            }
        }

        cout<<endl;

        for(k=0; k<str.length(); k++)
        {
            if(str[k]!='a' && str[k]!='e' && str[k]!='i' && str[k]!='o' && str[k]!='u' && str[k]!=' ' && str[k]!='.')
            {
                cout<<str[k];
            }
        }

        if(i<T)cout<<endl;
    }
    return 0;
}
