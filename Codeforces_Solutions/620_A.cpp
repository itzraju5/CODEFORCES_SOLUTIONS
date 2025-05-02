#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
    long long x1, y1;
    cin >> x1 >> y1;
    
    long long x2, y2;
    cin >> x2 >> y2;
    
    cout << max(abs(x1-x2), abs(y1-y2)) << endl;
    
    return 0;
}
