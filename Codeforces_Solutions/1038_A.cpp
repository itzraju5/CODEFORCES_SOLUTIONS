#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    vector<int> v(k,0);
    for(auto c: s) v[c-'A']++;
    
    int min_freq = *min_element(v.begin(), v.end());
    cout << min_freq * k;
    
    return 0;
}
