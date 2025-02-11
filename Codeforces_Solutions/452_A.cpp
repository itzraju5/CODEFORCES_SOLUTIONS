#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int n){
     vector<string> v = {"vaporeon", "jolteon", "flareon",
                         "espeon", "umbreon", "leafeon", 
                         "glaceon", "sylveon"};
     for(auto str: v){
         if(str.size() != n) continue;
         bool match = true;
         for(int i=0; i<n; i++){
             if(s[i] != '.' and s[i] != str[i]){
                 match = false;
                 break;
             }
         }
         if(match){
             cout << str << endl;
             return;
         }
     }
     
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    string s;
    cin >> n >> s;
    
    solve(s, n);
    
    return 0;
}