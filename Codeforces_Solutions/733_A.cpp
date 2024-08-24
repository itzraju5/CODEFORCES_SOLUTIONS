#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;
    
    int maxi = 0;
    int dis = -1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'|| s[i]=='Y')
        {
            maxi = max(maxi, i-dis);
            dis = i;
        }
    }
    
    int lst = s.length()-dis;
    maxi = max(maxi, lst);
    cout << maxi;
    
    return 0;
}
