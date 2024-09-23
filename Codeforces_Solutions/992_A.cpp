#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n;
	cin >> n;
	
	set<int> st;
	for(int i=0; i<n; i++)
	{
	    int el;
	    cin >> el;
	    
	    if(el != 0) st.insert(el);
	}
	
	cout << st.size();
	
	return 0;
}