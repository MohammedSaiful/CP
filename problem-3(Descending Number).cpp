#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;

    for(i=1000; i>0; i--)
    {
        cout<<i<<" ";
        if((i-1)%5==0)
        {
            cout<<endl;
        }
    }
    return 0;
}
