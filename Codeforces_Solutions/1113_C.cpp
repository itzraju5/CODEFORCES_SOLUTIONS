#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    

    sort(a.begin(), a.end());

    int l = 0, max_team_size = 0;

    for(int r = 0; r < n; ++r){
        while(a[r] - a[l] > 5){
            l++;
        }
        max_team_size = max(max_team_size, r - l + 1);
    }

    cout << max_team_size << endl;
    
    return 0;
}