#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    string s;
    cin >> s;
    
    vector<int> v(26, 0);
    
    for(auto i:s) v[i-'a']++;
    
    int odd_cnt(0);
    for(int i=0; i<26; i++){
        if(v[i]%2 != 0) odd_cnt++;
    }
    
    if(odd_cnt == 0 or odd_cnt%2 != 0){
        cout << "First";
    }else{
        cout << "Second";
    }
        
    return 0;
}

