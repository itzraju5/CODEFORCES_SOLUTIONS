#include <bits/stdc++.h>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, a, b;
	cin >> n >> a >> b;
	
	
	int maxi  = max(a,b);
	for(int i=1; i<n; i++)
	{
	    int a, b;
	    cin >> a >> b;
	    
	    if(maxi < a && maxi < b){
	        cout << "NO";
	        return 0;
	    }else if(maxi >= a && maxi >= b){
	        maxi = max(a,b);
	    }else if((maxi >= a && maxi < b) || (maxi < a && maxi >= b)){
	        maxi = min(a,b);
	    }
	}
	cout << "YES";
	
	return 0;
}
