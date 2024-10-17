#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	string n,m;
	cin >> n >> m;
	
	sort(n.begin(), n.end());
	
	if(n[0] == '0'){
	    for(int i=1; i<n.length(); i++)
	    {
	        if(n[i] != '0'){
	            swap(n[i], n[0]);
	            break;
	        }
	    }
	}
	
	if(n == m) cout << "OK";
	else cout << "WRONG_ANSWER";
	
	return 0;
}