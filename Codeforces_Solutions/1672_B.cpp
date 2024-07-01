#include<bits/stdc++.h>
using namespace std;

bool solve(string &s)
{
    if(s[s.length()-1] != 'B') return false;
    int cnt(0);
    for(auto &ch:s)
    {
        if(ch == 'A') cnt++;
        else cnt--;
        if(cnt < 0)
        {
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
        
        if(solve(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}