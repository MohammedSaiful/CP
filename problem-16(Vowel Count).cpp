#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,cnt;
    string str;
    char ch;
    cin>>T;
    cin.ignore();
    for(i=1; i<=T; i++)
    {
        getline(cin,str);

        cnt=0;
        for(j=0; j<str.length(); j++)
        {
            //cout<<str[j]<<endl;
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
            {
                cnt++;
            }
            else if(str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
            {
                cnt++;
            }
        }
        cout<<"Number of vowels = "<<cnt;
        if(i<T)cout<<endl;
    }
    return 0;
}
