

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j;
    string s;
    char c;
    cin>>T;
        for(i=0; i<T; i++)
        {
            cin.ignore();
            getline(cin,s);
            cin>>c;
            int count=0;
            for(int j=0; j<s.length(); j++)
            {
                if(c == s[j])
                {
                    count++;
                }
            }
            if(count>0)
            {
                cout<<"Occurrence of '"<<c<<"' in '"<<s<<"' = "<<count;
            }
            else
            {
                cout<<"'"<<c<<"' is not present";
            }
            if(i<T-1)
            {
                cout<<endl;
            }
        }
    return 0;
}
