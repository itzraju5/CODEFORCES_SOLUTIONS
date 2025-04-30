#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        
        int cnt(0);
        int diff = abs(a-b);
        cnt += diff / 5;
        diff %= 5;
        cnt += diff / 2;
        diff %= 2;
        cnt += diff;
        cout << cnt << endl;
    }
    return 0;
}
