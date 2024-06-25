#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	   int n;
	   cin >> n;
	   
	   string s;
	   cin >> s;
	   
	   int ans = s[0]-'0';
	   string res="";
	   for(int i=1; i<s.length(); i++)
	   {
	       int el = s[i]-'0';
	       if(ans == 0)
	       {
	           res += '+';
	           ans += el;
	       }
	       else
	       {
	           res += '-';
	           ans -= el;
	       }
	   }
	   cout << res << endl;
	}
	return 0;
}