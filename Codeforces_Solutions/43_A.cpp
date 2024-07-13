#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> mp;
    while(n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int res(0);
    string ans;
    for(auto i:mp)
    {
        if(i.second > res)
        {
            res = i.second;
            ans = i.first;
        }
    }
    cout << ans;
    
    return 0;
}