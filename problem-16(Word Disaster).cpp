#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,k,cnt,srt;
    char ch;
    string str;

    cin>>T;
    for(i=1; i<=T; i++)
    {
       // cin.ignore();
        cin>>ch;
        getline(cin,str);
        str=ch+str;
        cnt=0;
        srt=0;
        for(j=0; j<str.length(); j++)
        {
            if(str[j]==' ' || str[j]=='.')
            {
                srt=j;
                for(k=(srt); k>=cnt; k--)
                {
                    if(str[k]!=' ')
                    cout<<str[k];
                }
                cout<<" ";
                cnt=j;
            }
        }
        if(i<T)cout<<endl;
    }
    return 0;
}
