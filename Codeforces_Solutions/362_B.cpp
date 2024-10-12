#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	
	vector<int>dirty(m);
	
	for(int i=0; i<m; i++) cin >> dirty[i];
	
	if(find(dirty.begin(), dirty.end(), 1) != dirty.end() || 
	   find(dirty.begin(), dirty.end(), n) != dirty.end()) {
	      cout << "NO" << endl;
	      return 0;
	}
	
	sort(dirty.begin(), dirty.end());
	for(int i=2; i<m; i++){
	    if((dirty[i] == dirty[i-1]+1) && (dirty[i-1] == dirty[i-2]+1)){
	        cout << "NO" << endl;
	        return 0;
	    }
	}
	
	cout << "YES" << endl;
	
	return 0;
}