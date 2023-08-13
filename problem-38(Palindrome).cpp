#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,cnt,hell;
    string str1,str2;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>str1;
        cnt=str1.size();
        //char ch[cnt];
        str2=str1;
        hell=k=-1;
        for(j=cnt-1; j>=0; j--)
        {
           // cout<<k<<endl;
            k++;
            if(str2[k]!=str1[j])
            {
                hell=0;
                cout<<"Sorry! It is not palindrome!";
                break;
            }
        }
        //cout<<ch<<endl;
        if(hell!=0)cout<<"Yes! It is palindrome!";
        //else cout<<"Sorry! It is not palindrome!";

        cout<<endl;
    }

    return 0;
}
