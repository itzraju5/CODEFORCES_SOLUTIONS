#include <bits/stdc++.h>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int>v(n);
	    for(int i=0; i<n; i++) cin >> v[i];
	    
	    int gold(0), ans(0);
	    
	    for(int i=0; i<n; i++){
	        if(v[i] >= k){
	            gold += v[i];
	        }else if(v[i] == 0 and gold > 0){
	            gold -= 1;
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
	
	return 0;
}
