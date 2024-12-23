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
       
       vector<int> v(n);
       for(int i=0; i<n; i++) cin >> v[i];
       
       vector<int> temp(v.begin(), v.end());
       sort(begin(temp), end(temp));
       
       bool flag = true;
       for(int i=0; i<n; i++){
           if((v[i]%2 == 0 and temp[i]%2 != 0) or (v[i]%2 != 0 and temp[i]%2 == 0)){
               flag = false;
           }
       }
       if(flag){
           cout << "YES" << endl;
       }else{
           cout << "NO" << endl;
       }
    }
   
    return 0;
}
