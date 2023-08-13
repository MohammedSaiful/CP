#include<bits/stdc++.h>
using namespace std;

int fact( int f )
{
    if(f==1||f==0)
    {
        return 1;
    }
    return f*fact(f-1);
}

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string str, s;
        char ch;
        cin >> ch;
        getline(cin,str);
        str = ch + str;

        map < string, int > m;
        int cnt=0;

        stringstream ss(str);

        while( ss>>s )
        {
            cnt++;
            m[s]++;
        }

        int x = fact( cnt );

        for( auto u:m)
        {
            if( u.second > 1 )
            {
                x = x/fact( u.second );
                u.second=0;
            }
        }

        cout << 1 << "/" << x << endl;
    }
    return 0;
}
