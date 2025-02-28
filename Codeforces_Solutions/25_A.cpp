#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int odd_index(-1), even_index(-1);
    int odd(0), even(0);
    for(int i=0; i<n; i++){
        if(v[i] % 2 == 0){
            even++;
            even_index = i+1;
        }else{
            odd++;
            odd_index = i+1;
        }
    }
    
    cout << (odd == 1 ? odd_index : even_index);
    
    return 0;
}

