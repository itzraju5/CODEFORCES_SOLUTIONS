#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string keyboard, s;
        cin >> keyboard >> s;
        
        int moves = 0;
        for(int i = 1; i < s.length(); i++)
        {
            int a = keyboard.find(s[i]);
            int b = keyboard.find(s[i-1]);
            moves += abs(a - b); 
        }
        cout << moves << endl;
    }
    
    return 0;
}
