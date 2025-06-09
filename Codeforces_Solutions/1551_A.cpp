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
        
        long long best_c1(0), best_c2(0);
        long long min_diff = 1e18;
        
        for(int c1=n/3; c1<=n/3+1; c1++){
            long long c2 = n - 2 * c1;
            long long diff = abs(c1-c2);
            if(diff < min_diff){
                min_diff = diff;
                best_c1 = c1;
                best_c2 = c2;
            }
        }
        cout << best_c1 << " " << best_c2 << endl;
    }
    return 0;
}
