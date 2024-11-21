#include <bits/stdc++.h>
using namespace std;


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
        
        int sum = accumulate(begin(v), end(v), 0);
        
        if(sum == n) cout << 0 << endl;
        else if(sum < n) cout << 1 << endl;
        else cout << sum - n << endl;
    }
    
	return 0;
}

