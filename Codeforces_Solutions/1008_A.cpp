#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
bool isBerlanese(const string&s) {
    int n = s.length();
    for(int i = 0; i < n-1; i++) {
        if(!isVowel(s[i]) && s[i] != 'n' && !isVowel(s[i + 1])) { 
            return false;
        }
    }
    
    if(!isVowel(s[n - 1]) && s[n - 1] != 'n') return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    if(isBerlanese(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}


