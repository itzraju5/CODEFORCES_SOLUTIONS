#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    cin >> n;
        
    string s;
    cin >> s;
        
    stack<char> st;

    for (char c : s) {
        if (isVowel(c) && !st.empty() && isVowel(st.top())) {
            continue;
        }
        st.push(c);
    }
    
    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    
    cout << res << endl;
    
    return 0;
}

