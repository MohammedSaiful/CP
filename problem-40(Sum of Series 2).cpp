#include<bits/stdc++.h>
using namespace std;

#define maxsize 16
long long int arr[maxsize];

void fact()
{
    int i,j;
    long long int fat;
    for(i=1; i<16; i++)
    {
        fat=1;
        for(j=i; j>0; j--)
        {
            fat=fat*j;
            fat=fat;
        }
        arr[i]=fat;
    }
}

int main()
{
    fact();
    int t,i,j,x,k;
    double sum,mul;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>x;
        sum=0.0000;
        mul=1.0000;
        for(j=1; j<=x; j++)
        {
            mul=(double)j/(double)arr[j];
            sum=sum+mul;
        }
        cout<<fixed<<setprecision(4);
        cout<<sum<<endl;
    }


    return 0;
}
