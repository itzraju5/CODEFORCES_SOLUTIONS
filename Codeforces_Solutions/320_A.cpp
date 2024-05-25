#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if(s[0] == '4'){
        cout << "NO" << endl; return 0;
    }
    
    int cnt = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1'){
            cnt = 0;
        } else if (s[i] == '4'){
            cnt++;
            if(cnt == 3){
                cout << "NO" << endl; return 0;
            }
        } else{
            cout << "NO" << endl; return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}
