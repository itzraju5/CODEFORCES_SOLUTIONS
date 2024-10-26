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
	    
	    for(int i=0; i<s.length(); i++){
	        if(i%2 == 0){
	            if(s[i] == 'a') s[i] = 'b';
	            else s[i] = 'a';
	        }else{
	           if(s[i] == 'z') s[i] = 'y';
	           else s[i] = 'z';
	        }
	    }
	    cout << s << endl;
	}
	
	return 0;
}