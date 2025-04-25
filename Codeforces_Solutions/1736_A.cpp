#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        
        int cnt_a_1(0), cnt_b_1(0);
        for(auto i: a) if(i == 1) cnt_a_1++;
        for(auto i: b) if(i == 1) cnt_b_1++;
        
        int diff = abs(cnt_a_1 - cnt_b_1);
        
        int mismatch(0);
        for(int i=0; i<n; i++) if (a[i] != b[i]) mismatch++;
        
        cout << min(diff + 1 , mismatch) << endl;
        
    }
    
    return 0;
}

