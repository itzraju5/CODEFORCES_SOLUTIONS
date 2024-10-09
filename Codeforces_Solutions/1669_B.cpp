#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int>v(n);
	    for(int i=0; i<n; i++) cin >> v[i];
	    
	    sort(begin(v), end(v));
	    
	    bool flag = false;
	    int cnt(1);
	    int res = -1;
	    for(int i=1; i<n; i++){
	        if(v[i] == v[i-1]){
	            cnt++;
	            if(cnt == 3){
	                flag = true;
	                res = v[i];
	                break;
	            }
	        }else{
	            cnt = 1;
	        }
	    }
	    if(flag) cout << res <<endl;
	    else cout << -1 << endl;
	}
    
	return 0;
}