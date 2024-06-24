#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int ans = 0;
	    
	    string s = to_string(n);
	    int len = s.length();
	    ans = ans + (s[0]-'0');
	    len--;
	    ans = len * 9 + ans;
	    cout << ans << endl;
	    
	}
	return 0;
}
