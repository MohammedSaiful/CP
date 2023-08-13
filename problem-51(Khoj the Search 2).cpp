#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,cnt,n,num,siz_1,siz_2;
    string str1,str2;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str1>>str2;

        siz_1=str1.size();
        siz_2=str2.size();
        num=0;
        for(j=0; j<siz_1; j++)
        {
            if(str1[j]==str2[0])
            {
                cnt=j;
                n=0;
                for(k=0; k<siz_2; k++)
                {
                    if(str1[cnt]==str2[k])
                    {
                        n++;
                    }
                    if(str1[cnt]!=str2[k])
                    {
                        break;
                    }
                    cnt++;
                    if(n==siz_2)
                    {
                        num++;
                    }
                }
            }
        }
        cout<<num;

        cout<<endl;
    }
    return 0;
}
