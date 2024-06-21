#include<bits/stdc++.h>
using namespace std;
 
bool solve(string &s)
{
    if(s.length()%2 != 0) return false;
    int mid = s.length()/2;
    return s.substr(0, mid) == s.substr(mid, mid);
}
 
int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    if(solve(s))
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}