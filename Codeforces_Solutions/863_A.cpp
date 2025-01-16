#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s) {
    int i = 0, j = s.size() - 1;
    while(i<j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long x;
    cin >> x;

    string s = to_string(x);

    while (!s.empty() && s.back() == '0') s.pop_back();

    if(isPalindrome(s)) cout << "YES" ;
    else cout << "NO";
    
    return 0;
}
