#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        string res = "";
        for(int i=0; i<s.length(); i+=2) res.push_back(s[i]);
        res.push_back(s[s.length()-1]);
        cout << res << endl;
    }
    return 0;
}