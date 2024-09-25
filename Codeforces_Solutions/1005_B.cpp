#include <bits/stdc++.h>
using namespace std;

int solve(string &s, string &t){
    int n1 = s.length();
    int n2 = t.length();
    
    if(s[n1-1] != t[n2-1]) return n1+n2;
    
    int i = n1-1;
    int j = n2-1;
    
    while(i>=0 && j>=0){
        if(s[i] == t[j]){
            i--;
            j--;
        }else{
            break;
        }
    }
    return i+j+2;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s, t;
	cin >> s >> t;
	
	cout << solve(s,t) << endl;
	
	return 0;
}