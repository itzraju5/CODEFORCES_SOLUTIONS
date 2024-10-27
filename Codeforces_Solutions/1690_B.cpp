#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> a(n), b(n);
	    for(int i=0; i<n; i++) cin >> a[i];
	    for(int i=0; i<n; i++) cin >> b[i];
	    
	    bool flag = true;
	    int max_diff(0);
	    for(int i=0; i<n; i++){
	        if(a[i] < b[i]){
	            flag = false;
	            break;
	        }
	        max_diff = max(max_diff, a[i]-b[i]);
	    }
	    
	    if(flag){
	        for(int i=0; i<n; i++)
	        {
	            if(b[i]!=0 && max_diff != (a[i]-b[i])){
	                flag = false;
	            }
	        }
	    }
	    
	    cout << (flag ? "YES" : "NO") << endl;
	}
	
	return 0;
}