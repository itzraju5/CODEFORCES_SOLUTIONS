#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string s1, s2;
    cin >> s1 >> s2;
    
    int cnt(0);
    for(int i=0; i<s1.length(); i++){
        int a = s1[i]-'0';
        int b = s2[i]-'0';
        
        cnt += min((a+10-b)%10, (b+10-a)%10);
    }
    cout << cnt;
    
    return 0;
}
