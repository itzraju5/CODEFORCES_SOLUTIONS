#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, k;
    cin >> n >> k;  
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i]; 
    
    int cnt = 1;
    int maxi = 1;
    for(int i=1; i<n; i++)
    {
        if(v[i] != v[i-1]){
            cnt++;
            maxi = max(maxi, cnt);
        }else{
            cnt = 1;
        }
    }
    cout << maxi;
	
	return 0;
}