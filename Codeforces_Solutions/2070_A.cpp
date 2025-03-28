#include <bits/stdc++.h>
using namespace std;

int count_valid(int remain) {
    if (remain >= 2) return 3;
    else if (remain == 1) return 2;
    else return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        cout << (n / 15) * 3 + count_valid(n % 15) << '\n';
    }
    
    return 0;
}