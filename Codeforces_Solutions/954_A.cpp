#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int cnt(0);
    for(int i=1; i<s.length(); i++)
    {
        if(s[i] != s[i-1]){
            cnt++;
            i++;
        }
    }
    cout << s.length()-cnt;       
    return 0;
}
