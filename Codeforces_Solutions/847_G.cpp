#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> v(7, 0);
    
    for(int i=0; i<n; i++){
        string group;
        cin >> group;
        
        for(int i=0; i<7; i++){
            if(group[i] == '1'){
                v[i]++;
            }
        }
    }
    
    cout << *max_element(begin(v), end(v));
    
    return 0;
}