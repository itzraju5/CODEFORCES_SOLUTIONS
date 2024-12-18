#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int min_distance = INT_MAX;
        if(is_sorted(begin(v), end(v))){
            for(int i=1; i<n; i++){
                min_distance = min(min_distance, v[i]-v[i-1]);
            }
            cout << min_distance/2 + 1 << endl;
        }else{
            cout << "0" << endl;
        }
    }

    return 0;
}
