#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        sort(begin(v), end(v));
        int i(0), j(n-1), moves(0);
        
        while(i<j){
            if(v[i] + v[j] == k){
                moves++;
                i++;
                j--;
            }else if(v[i]+v[j] < k){
                i++;
            }else{
                j--;
            }
        }
        cout << moves << endl;
    }
    
    return 0;
}