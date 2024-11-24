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
        
        long long sum = accumulate(v.begin(), v.end(), 0LL);
        long long target = sum / n;
        
        bool flag = true;
        long long extra(0), need(0);
        for(int i=0; i<n; i++){
            if(v[i] > target){
                extra += v[i] - target;
            }else{
                need += target - v[i];
            }
            if(need > extra){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
	return 0;
}
