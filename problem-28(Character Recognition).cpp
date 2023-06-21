#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k;
    char ch;
    cin>>t;
    for(i=1;i<=t; i++)
    {
        cin>>ch;
        if('Z'>=ch && ch>='A') cout<<"Uppercase Character";

        else if('z'>=ch && ch>='a') cout<<"Lowercase Character";

        else if(ch>='0' && '9'>=ch) cout<<"Numerical Digit";

        else cout<<"Special Characters";

        if(i<t)cout<<"\n";
    }
    return 0;
}
