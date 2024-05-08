#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    vector<char>v(26,0);
    int unique(0);
    for(int i=0; i<s.length(); i++) v[s[i]-'a']++;
    
    for(int i = 0; i<26; i++)
    {
        if(v[i] != 0)unique++;
    }
    
    if(s.length() < k){
        cout << "impossible";
    }
    else if(s.length() >= k && unique <= k){
        cout << abs(unique-k);
    }else
    {
        cout << 0;
    }
    
    return 0;
}

