#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int total_sum = a+b+c+d;
    cout << 15 - total_sum << endl;
    
    return 0;
}
