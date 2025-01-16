#include <bits/stdc++.h>
using namespace std;

bool solve(string &s){
    string target = "heidi";
    int j(0);
    for(int i=0; i<s.length(); i++){
        if(s[i] == target[j]){
            j++;
        }
        if(j == target.length()) return true;
    }
    return false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    if(solve(s)) cout << "YES";
    else cout << "NO";
    
    return 0;
}


