#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        char ch;
        string str;
        cin >> ch;
        getline( cin, str );
        str = ch + str;

        map <char, int> m;


        for( int i = 0; i < str.length(); i++){
            m[str[i]]++;
        }

        for(int i=0; i<str.length(); i++){
            if( m[str[i]]!=0 ){
                cout <<str[i] << " = " << m[str[i]] <<endl;
                m[str[i]]=0;
            }
        }

        cout << endl;
    }

    return 0;
}
