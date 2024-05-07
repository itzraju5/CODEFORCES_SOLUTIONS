#include<bits/stdc++.h>
using namespace std;

string solve(string& s){
    string temp = "";
    int cnt(0);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '1')
        {
            cnt++;
        }
        else
        {
            temp += to_string(cnt);
            cnt = 0;
        }
    }
    temp += to_string(cnt);
    return temp;
}

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    string res = solve(s);
    cout << res << endl;
    
    return 0;
}
