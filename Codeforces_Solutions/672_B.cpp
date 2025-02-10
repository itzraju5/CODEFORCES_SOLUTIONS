#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int n){
    if(n > 26) return -1;
    vector<int> v(26, 0);
    for(int i=0; i<s.length(); i++) v[s[i]-'a']++;
    
    int cnt(0);
    for(int i = 0; i < 26; i++){
        if(v[i] > 1) cnt += (v[i] - 1);
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    cout << solve(s, n) << endl;
    
    return 0;
}