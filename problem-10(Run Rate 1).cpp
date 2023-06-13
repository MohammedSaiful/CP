#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,TOT,CUR,BALL,p_ball;
    cin>>T;
    double C_R,R_R;

    if(1<=T && T<=100)
    {
        for(i=1; i<=T; i++)
        {
            cin>>TOT>>CUR>>BALL;
            p_ball=300-BALL;
            C_R=((CUR*1.0)/p_ball)*6;//
            cout<<fixed<<setprecision(2);
            if(CUR==0)
            {
                cout<<"0.00";
            }
            else
            {
                cout<<C_R;
            }

            if((TOT-CUR)<0)
            {
                cout<<" "<<"0.00";
            }
            else
            {
                 R_R=(((TOT-CUR+1)*1.0)/BALL)*6;//

                  //cout<<fixed<<setprecision(2);
                 cout<<" "<<R_R;
            }
            if(i<T)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
