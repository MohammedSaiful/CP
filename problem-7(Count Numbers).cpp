#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j;
    cin>>T;
    cin.ignore();
    string arr[T];
    for(i=0; i<T; i++)
    {
        getline(cin,arr[i]);
    }
    for(i=0; i<T; i++)
    {
        int count=0;
        for(j=0; j<arr[i].length(); j++)
        {
                if(arr[i][j]!=' ' )
                {
                    //cout<<"["<<arr[i][j]<<"]";
                    if(arr[i][j-1]==' ' || j==0)
                    {
                        //cout<< "("<<arr[i][j]<<")";
                        count++;
                    }
                }
        }
        cout<<count;
        if(i<(T-1))
        {
            cout<<endl;
        }
    }
    return 0;
}
