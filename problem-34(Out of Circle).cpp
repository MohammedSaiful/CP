#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    float Xc,Yc,x,y,R,num;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>Xc>>Yc;
        cin>>R;
        cin>>x>>y;
        num=sqrt(pow((Xc-x),2)+pow((Yc-y),2));
        if(num>R)
        {
            cout<<"The point is not inside the circle";
        }
        else
        {
            cout<<"The point is inside the circle";

        }
        if(i<t)
        cout<<"\n";
    }
    return 0;
}
