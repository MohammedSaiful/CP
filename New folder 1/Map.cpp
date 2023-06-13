#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>m1;
    for(int i=0; i<3; i++)
    {
        cin>>m1[i];
    }

    for(int i=0; i<3; i++)
    {
        cout<<m1[i]<<endl;
    }

    for(auto it:m1)
    {
        cout<</*it.first<<" "<<*/it.second<<endl;
    }
    return 0;
}
