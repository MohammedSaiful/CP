#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, arr[26]={0};
    cin>>t;
    for(int k=1; k<=t; k++){
        char ch;
        string str;
        cin >> ch;
        getline( cin, str );
        str = ch + str;

        for(int i=0; i<str.length(); i++)
        {

            if(str[i]>='a' && str[i]<='z')
            {
                arr[str[i]-'a']+=1;
            }
        }
        for(int i=0; i<str.length(); i++)
        {
            if(arr[str[i]-'a']!=0)
            {
                cout<<str[i]<<" = "<<arr[str[i]-'a']<<endl;
                arr[str[i]-'a']=0;

            }
        }
        if(k<t)
        {
            cout<<endl;
        }
    }
    return 0;
}
