#include <bits/stdc++.h>
using namespace std;

bool solve(string &s, string &t)
{
    if(s.length() != t.length()) return false;
    
    vector<int>v;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != t[i]) v.push_back(i);
    }
    
    if(v.size() == 2){
       if((s[v[0]] == s[v[1]]) && (t[v[0]] == t[v[1]])) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s, t;
        cin >> s >> t;
        
        if(solve(s, t)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
