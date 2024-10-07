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
	    
	    string s;
	    cin >> s;
	    
	    int mini = INT_MAX; 
	    int cnt_W(0);
	    
	    for(int i=0; i<k; i++) if(s[i] == 'W') cnt_W++;
	    
	    mini = cnt_W;
	    for(int j=k; j<n; j++){
	        if(s[j] == 'W') cnt_W++;
	        if(s[j-k] == 'W') cnt_W--;
	        
	        mini = min(mini, cnt_W);
	    }
	    cout << mini << endl; 
	}
	
	return 0;
}
