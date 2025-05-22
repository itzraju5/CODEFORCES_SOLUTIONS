#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        sort(rbegin(v), rend(v));
        int cnt_team(0), ans(0);
        for(int i=0; i<n; i++){
            cnt_team++;
            if(1LL * cnt_team * v[i] >= x){
                ans++; 
                cnt_team=0;
            }
        }
        cout << ans << endl;
    }
}