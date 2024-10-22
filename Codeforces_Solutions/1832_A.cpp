#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    bool flag = false;
	    for(int i=1; i<s.length()/2; i++)
	    {
	        if(s[0] != s[i]){
	            flag = true;
	            break;
	        }
	    }
	    if(flag) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	
	return 0;
}