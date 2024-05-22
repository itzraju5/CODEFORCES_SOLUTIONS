#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string res = "";
    bool temp = true;
    for(int i=1; i<s.length(); i++)
    {
        if(islower(s[i])) temp = false;
    }
    
    if(temp)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(islower(s[i]))
            {
                res += toupper(s[i]);
            }
            else
            {
                res += tolower(s[i]);
            }
        }
        cout << res;
        return 0;
    }
    cout << s;
    
    return 0;
}
