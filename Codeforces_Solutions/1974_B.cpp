#include<bits/stdc++.h>
using namespace std;

string solve(string &s, int n)
{
    string temp = s;
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
        
    string res = "";
    for(auto &ch:s)
    {
        int i = temp.find(ch);
        res += temp[temp.length()-i-1];
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << solve(s, n) << endl;
    }
    return 0;
}


