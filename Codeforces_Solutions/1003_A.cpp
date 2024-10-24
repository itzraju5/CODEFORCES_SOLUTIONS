#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	vector<int>v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	map<int, int> mp;
	for(auto i: v) mp[i]++;
	
	int ans(1);
	for(auto &el: mp){
	    ans = max(ans, el.second);
	}
	cout << ans;
	
	return 0;
}