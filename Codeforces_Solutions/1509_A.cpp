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
	    
	    vector<int> even, odd;
	    for(int i=0; i<n; i++){
	        int num;
	        cin >> num;
	        
	        if(num % 2 == 0) even.push_back(num);
	        else odd.push_back(num);
	    }
	    
	    for(auto i: even) cout << i << " ";
	    for(auto i: odd) cout << i << " ";
	    cout << endl;
	}
	
	return 0;
}