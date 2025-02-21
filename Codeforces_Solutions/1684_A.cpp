#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n >= 10 and n <= 90){
        string res = to_string(n);
        return res[1]-'0';
    }
    int mini = INT_MAX;
    while(n>0){
        int digit = n%10;
        mini = min(mini, digit);
        n/=10;
    }
    return mini;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        cout << solve(n) << endl;
    }
    
    return 0;
}

