#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    string s;
    int k;
    cin >> s >> k;
    
    vector<int> v(26);
    for(int i=0; i<26; i++){
        int val;
        cin >> val;
        v[i] = val;
    }
    
    int ans(0);
    for(int i=0; i<s.length(); i++){
        ans += (i+1) * v[s[i]-'a'];
    }
    
    int maxi = *max_element(v.begin(), v.end());
    for(int i=1; i<=k; i++){
        ans += (s.length() + i) * maxi;
    }
    cout << ans << endl;
    
    return 0;
}