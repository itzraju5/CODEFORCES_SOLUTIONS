#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    
	    string a,b;
	    cin >> a >> b;
	    
	    int cnt(0), i(0), j(0);
	    
	    while(j<m){
	        if(a[i] == b[j]){
	            cnt++;
	            i++;
	            j++;
	        }else{
	            j++;
	        }
	    }
	    cout << cnt << endl;
	}
	
	return 0;
}