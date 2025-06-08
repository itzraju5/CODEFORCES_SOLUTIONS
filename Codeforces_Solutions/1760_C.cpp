#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);      

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int first_max = *max_element(begin(v), end(v));
        int second_max = INT_MIN, cnt_max(0);
        
        for(int i=0; i<n; i++){
            if(v[i] == first_max) cnt_max++;
            else second_max = max(v[i], second_max);
        }
        
        for(int i=0; i<n; i++){
            if(cnt_max > 1){
                cout << v[i] - first_max << " ";
            }else if(v[i] == first_max){
                cout << v[i] - second_max << " ";
            }else{
                cout << v[i] - first_max << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
