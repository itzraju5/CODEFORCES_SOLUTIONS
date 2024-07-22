#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        int cnt = 0, a = 0, b = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
            {
                a++;
            }
            else
            {
                if(s[i] == '[')
                {
                    b++;
                }
                else
                {
                    if(s[i] == ')' && a != 0)
                    {
                        cnt++;
                        a--;
                    }
                    else
                    {
                        if(s[i] == ']' && b != 0)
                        {
                            cnt++;
                            b--;
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}
