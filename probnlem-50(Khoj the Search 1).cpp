#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,cnt,num,siz_1,siz_2;
    string str1,str2;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str1>>str2;

        siz_1=str1.size();
        siz_2=str2.size();

        for(j=0; j<siz_1; j++)
        {
            if(str1[j]==str2[0])
            {
                cnt=j;
                num=0;
                for(k=0; k<siz_2; k++)
                {
                    if(str1[cnt]==str2[k])
                    {
                        num++;
                    }
                    if(str1[cnt]!=str2[k])
                    {
                        break;
                    }
                    cnt++;
                }
            }
            if(num==siz_2)
            {
                break;
            }
        }
        cout<<j;

        cout<<endl;
    }
    return 0;
}
