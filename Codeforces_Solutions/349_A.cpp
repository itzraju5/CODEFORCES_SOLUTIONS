#include <bits/stdc++.h>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	vector<int>v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	int cnt_25(0), cnt_50(0);
	
	for(int i=0; i<n; i++)
	{
	    if(v[i] == 25){
	        cnt_25++;
	    }
	    else if(v[i] == 50){
	        if(cnt_25 > 0){
	            cnt_50++;
    	        cnt_25--; 
	        }else{
	            cout << "NO";
    	        return 0;
    	    }
	    }else{
	        if(cnt_50 > 0 && cnt_25 > 0){
	            cnt_50--;
	            cnt_25--;
	        }else if(cnt_25 >= 3){
	            cnt_25 -= 3;
	        }else{
	            cout << "NO";
	            return 0;
	        }
	    }
	}
	
	cout << "YES";
	    
	return 0;
}