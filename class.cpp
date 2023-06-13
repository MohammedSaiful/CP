#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,T;
    int x=0;
    char arr[4];
    cin>>T;
    if(0<T && T<=150)
    {
        for(i=0; i<T;i++)
        {
            cin>>arr;
            if(arr[1]=='+')
            {
                x++;
            }
            else
            {
                x--;
            }
            cout<<x;
            if(i<T-1)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
