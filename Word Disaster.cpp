#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int t,a,count=-1;
    cin>>t;

    while(t>=0)
    {
      getline(cin,s);
      a=s.size();

      for(int i=0; i<a; i++)
      {
          count++;
          if(s[i] ==' ')
          {
              for(int j=i; j>=(i-count); j--)
              {
                  cout<<s[j];
              }
              count=-1;
          }
      }

      t--;
    }

}
