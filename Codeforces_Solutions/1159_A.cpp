#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int cnt_0(0), cnt_1(0);
    for(int i=0; i<s.length(); i++){
        if(s[i] == '+'){
            cnt_1++;
        }else if(s[i] == '-' and cnt_1 > 0){
            cnt_1--;
        }
    }
    cout << cnt_1 << endl;
    
    return 0;
}
