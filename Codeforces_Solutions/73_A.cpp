#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    
    int res = 0;
    char ch = 'a';
    for(int i=0; i<s.length(); i++)
    {
        int a = abs(s[i]-ch);
        int b = abs(26-a);
        res+= min(a,b);
        ch = s[i];
    }
    cout << res; 
    
    return 0;
}

