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
	    
	    int cnt_r(0), cnt_g(0), cnt_b(0);
	    bool can_open = true;
	    for(int i=0; i<s.length(); i++){
	        if(s[i] == 'R' && cnt_r == 0){
	            can_open = false;
	            break;
	        }else if(s[i] == 'G' && cnt_g == 0){
	            can_open = false;
	            break;
	        }else if(s[i] == 'B' && cnt_b == 0){
	            can_open = false;
	            break;
	        }else if(s[i] == 'r'){
	            cnt_r++;
	        }else if(s[i] == 'g'){
	            cnt_g++;
	        }else if(s[i] == 'b'){
	            cnt_b++;
	        }
	    }
	    if(can_open) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	
	return 0;
}