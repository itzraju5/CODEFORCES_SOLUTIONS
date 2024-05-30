#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> v(2*n);
	    for(int i=0; i<2*n; i++) cin >> v[i];
	    
	    int odd_cnt = 0, even_cnt = 0;
	    for(auto &el:v)
	    {
	        if(el%2 == 0) even_cnt++;
	        else odd_cnt++;
	    }
	    
	    if(even_cnt  == odd_cnt) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}