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
	    
	    string s;
	    cin >> s;
	    
	    string correct = "Timur";
	    sort(correct.begin(), correct.end());
	    sort(s.begin(), s.end());
	    
	    if(n!=5){
	        cout << "NO" << endl;
	    }
	    else if(correct == s){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
  
	}
	
	return 0;
}