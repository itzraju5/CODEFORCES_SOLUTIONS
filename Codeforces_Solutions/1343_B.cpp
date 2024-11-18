#include <bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n%4 == 0) return true;
    return false;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v;
        int even_sum(0), odd_sum(0);
        if(solve(n)){
            for(int i=1; i<=n; i++){
                if(i%2 == 0){
                   v.push_back(i);
                   even_sum += i;
                } 
            }
            for(int i=1; i<n-1; i++){
                if(i%2 != 0){
                    v.push_back(i);
                    odd_sum += i;
                }
            }
            v.push_back(even_sum - odd_sum);
            cout << "YES" << endl;
            for(auto i: v){
                cout << i << " ";
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
	return 0;
}
