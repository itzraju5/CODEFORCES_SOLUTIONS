#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> v1(n), v2(n-1), v3(n-2);
    for(int i=0; i<n; i++) cin >> v1[i];
    for(int i=0; i<n-1; i++) cin >> v2[i];
    for(int i=0; i<n-2; i++) cin >> v3[i];
    
    long long sum1 = accumulate(begin(v1), end(v1), 0LL);
    long long sum2 = accumulate(begin(v2), end(v2), 0LL);
    long long sum3 = accumulate(begin(v3), end(v3), 0LL);
    
    cout << sum1 - sum2 << endl;
    cout << sum2 - sum3 << endl;
    
    return 0;
}
