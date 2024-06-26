#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	string res = "314159265358979323846264338327";
	
	while(t--)
	{
	    string s;
	    cin >> s;
	    
	    int i=0, cnt = 0;
	    while(i<s.length())
	    {
	        if(res[i] == s[i]) cnt++;
	        else break;
	        i++;
	    }
	    cout << cnt << endl;
	}
	return 0;
}