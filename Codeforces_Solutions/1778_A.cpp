#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int n){
    int total_sum = accumulate(begin(v), end(v), 0);
    for(int i=0; i<n-1; i++){
        if(v[i] == -1 and v[i+1] == -1){
            return total_sum + 4;
        }
    }
    
    int neg = count(begin(v), end(v), -1);
    if(neg == 0){
        return total_sum - 4;
    }
    return total_sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
       int n;
       cin >> n;
       
       vector<int> v(n);
       for(int i=0; i<n; i++) cin >> v[i];
       
       cout << solve(v, n) << endl;
    }
   
    return 0;
}
