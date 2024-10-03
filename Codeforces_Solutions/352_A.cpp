#include <bits/stdc++.h>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	int cnt0(0), cnt5(0);
	
	for(int i=0; i<n; i++){
	    if(v[i] == 0) cnt0++;
	    else cnt5++;
	}
	
	if(cnt0 == 0){
	    cout << -1 << endl;
	    return 0;
	}
	
	int need5 = (cnt5/9) * 9;
	if(need5 == 0){
	    cout << 0;
	    return 0;
	}
	
	for(int i=0; i<need5; i++) cout << 5;
	for(int i=0; i<cnt0; i++) cout << 0;
	
	return 0;
}
