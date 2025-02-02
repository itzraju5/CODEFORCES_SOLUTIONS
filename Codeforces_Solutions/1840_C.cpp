#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
       int n, k, q;
       cin >> n >> k >> q;
       
       vector<int>temp(n);
       for(int i=0; i<n; i++) cin >> temp[i];
       
       ll cnt(0);
       int valid_length(0);
       for(int i=0; i<n; i++){
           if(temp[i] > q){
               if(valid_length >= k){
                   ll m = valid_length-k+1;
                   cnt += (m*(m+1))/2;
               }
               valid_length = 0;
           }else{
               valid_length++;
           }
       }
       
       if(valid_length >= k){
           ll m = valid_length-k+1;
           cnt += (m*(m+1))/2;
       }
       cout << cnt << endl;
    }
    
    return 0;
}

