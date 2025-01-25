#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        if((s[1] == '>' and (s[0] > s[2])) || (s[1] == '<' and (s[0] < s[2])) || (s[1] == '=' and (s[0] = s[2]))){
            cout << s << endl;
        }else if(s[0] < s[2]){
            cout << s[0] << "<" << s[2]<<endl;
        }else if(s[0] > s[2]){
            cout << s[0] << ">" << s[2]<<endl;
        }else{
            cout << s[0] << "=" << s[2]<<endl;
        }
    }
    
    return 0;
}