#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
        
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
        
    int first_max(0), winner_index(-1), second_max(-1);
    for(int i=0; i<n; i++){
        if(v[i] > first_max){
            second_max = first_max;
            first_max = v[i];
            winner_index = i;
        }else if(v[i] > second_max){
            second_max = v[i];
        }
    }
    cout << winner_index + 1 << " " << second_max << endl;
    
    return 0;
}
