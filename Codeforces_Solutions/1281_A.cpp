#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        if(s.rfind("po") == s.length()-2)
        {
            cout << "FILIPINO" << endl;
        }else if(s.rfind("desu") == s.length()-4 || s.rfind("masu") == s.length()-4){
            cout << "JAPANESE" << endl;
        }else{
            cout << "KOREAN" << endl;
        }
    }
    
    return 0;
}

