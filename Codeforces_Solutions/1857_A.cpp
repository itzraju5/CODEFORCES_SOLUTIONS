#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr, int n){
    int odd_cnt(0), even_cnt(0);
    for(auto i: arr){
        if(i%2 == 0) even_cnt++;
        else odd_cnt++;
    }
    if(even_cnt == 0 and odd_cnt % 2 != 0) return 0;
    if(even_cnt % 2 != 0 and odd_cnt % 2 != 0) return 0;
    if(even_cnt % 2 == 0 and odd_cnt % 2 != 0) return 0;
    return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        if(solve(v,n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
	return 0;
}