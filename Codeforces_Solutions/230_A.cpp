#include <bits/stdc++.h>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int s,n;
	cin >> s >> n;
	
	vector<pair<int, int>> pair;
	for(int i=0; i<n; i++){
	    int xi, yi;
	    cin >> xi >> yi;
	    pair.push_back(make_pair(xi, yi));
	}
	
	sort(begin(pair), end(pair));
	
	for(auto el:pair){
	    if(el.first >= s){
	        cout << "NO" << endl;
	        return 0;
	    }else{
	       s += el.second;
	    }
	}
	cout << "YES" << endl;
	
	return 0;
}
