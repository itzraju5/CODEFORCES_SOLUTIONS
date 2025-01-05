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
       
       vector<int>v(n);
       for(int i=0; i<n; i++) cin >> v[i];
       
       vector<int> even, odd;
       for(auto& i: v){
           if(i%2 == 0) even.push_back(i);
           else odd.push_back(i);
       }
       
       
       int Mihai = accumulate(begin(even), end(even), 0);
       int Bianca = accumulate(begin(odd), end(odd), 0);
       bool flag = false;
       
       if(Mihai > Bianca) cout << "YES" << endl;
       else cout << "NO" << endl;
    }

    return 0;
}

// The question has not been explained clearly