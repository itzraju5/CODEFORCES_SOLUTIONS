#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        char max_digit = '0';
        
        for(auto& i:s){
            if(i>max_digit){
                max_digit = i;
            }
        }
        cout << max_digit - '0' << endl;
    }

    return 0;
}
