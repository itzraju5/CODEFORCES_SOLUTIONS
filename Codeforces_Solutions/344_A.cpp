#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int group(1);
    for(int i=1; i<n; i++){
        if(v[i] != v[i-1]) group++;
    }
    
    cout << group << endl;
    
	return 0;
}