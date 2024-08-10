#include<bits/stdc++.h>
using namespace std;

string solve(string &s, int n)
{
    stack<char>st;
    int cnt(0);
    for(int i=0; i<n; i++)
    {
        if(!st.empty() && st.top() == s[i]){
            cnt++;
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(cnt % 2 == 0) return "NO";
    return "YES";
}

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    cout << solve(s, n);
    
    return 0;
}
