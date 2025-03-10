#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        vector<string> v(3);
        for(int i=0; i<3; i++) cin >> v[i];
        
        int cnt_A(0), cnt_B(0), cnt_C(0);
        for(int i=0; i<3; i++){
            string str = v[i];
            for(char c : str) {
                if (c == 'A') cnt_A++;
                else if (c == 'B') cnt_B++;
                else if (c == 'C') cnt_C++;
            }
        }
        if(cnt_A == 2) cout << "A" << endl;
        else if(cnt_B == 2) cout << "B" << endl;
        else cout << "C" << endl;
    }
    
    return 0;
}

