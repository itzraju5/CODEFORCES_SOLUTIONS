#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    
    int cnt1(0), cnt2(0);
    cnt1 += min(a, b);
    cnt2 += (abs(a-b) / 2);
    cout << cnt1 << " " << cnt2 << endl;
    
    return 0;
}
