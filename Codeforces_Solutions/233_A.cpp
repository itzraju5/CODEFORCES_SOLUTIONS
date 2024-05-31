#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int>v;
	for(int i=0; i<n; i++) v.push_back(i+1);
	
	if(n%2 != 0){
	    cout << "-1";
	    return 0;
	}
	else
	{
	    for(int i=0; i<n; i++)
	    {
	        swap(v[i], v[i+1]);
	        i++;
	    }
	}
	
	for(auto &el:v) cout << el << " ";
    
	return 0;
}