#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    string s;
    cin >> s;
    
    string temp = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string res = "";
    for(int i=0; i<s.length(); i++)
    {
        if(ch == 'R')
        {
            res += temp[temp.find(s[i]) - 1];
        }
        else
        {
            res += temp[temp.find(s[i]) + 1];
        }
    }
    cout << res;
    
    return 0;
}