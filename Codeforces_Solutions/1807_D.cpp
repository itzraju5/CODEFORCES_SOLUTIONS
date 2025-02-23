#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n, q;
        cin >> n >> q;
        
        vector<int> v(n);
        vector<long long> prefix_sum(n);
        long long total_sum(0);
        for(int i=0; i<n; i++){
            cin >> v[i];
            total_sum += v[i];
            prefix_sum[i] = v[i] + (i>0 ? prefix_sum[i-1] : 0);
        } 

        while(q--){
            int l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;
            long long range_sum = prefix_sum[r] - (l>0 ? prefix_sum[l-1] : 0);
            long long new_sum = (total_sum - range_sum) + (1LL*(r-l+1) * k);
            
            if(new_sum%2 == 1){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}

