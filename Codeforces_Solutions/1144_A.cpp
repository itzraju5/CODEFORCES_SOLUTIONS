#include<bits/stdc++.h>
using namespace std;

bool solve(string s)
{
    set<char>st;
    for(int i=0; i<s.length(); i++) st.insert(s[i]);
        
    if(st.size() != s.length()){
        return false;
    }
    sort(s.begin(), s.end());
    for(int i=1; i<s.length(); i++)
    {
        if(abs(s[i]-s[i-1]) != 1){
            return false;
        }
    }
    return true;
}

int main() {
    
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        if(solve(s)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}