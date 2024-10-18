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
	    
	    int cnt(0);
	    for(int i=0; i<n; i++){
	        int reviewer;
	        cin >> reviewer;
	        
	        if(reviewer == 2) cnt++;
	    }
	    cout << n-cnt << endl;
	}
	
	return 0;
}