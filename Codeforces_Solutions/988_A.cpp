#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n, k;
	cin >> n >> k;
	
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	unordered_map<int, int> mp;
	for(int i=0; i<n; i++){
	    if(mp.find(v[i]) == mp.end()){
	        mp[v[i]] = i+1;
	    }
	}
	
	if(mp.size() < k){
	    cout << "NO" << endl;
	}else{
	    cout << "YES" << endl;
	    for(auto el: mp){
	        cout << el.second << " ";
	        k--;
	        if(k == 0){
	            break;
	        }
	    }
	}
	
	return 0;
}