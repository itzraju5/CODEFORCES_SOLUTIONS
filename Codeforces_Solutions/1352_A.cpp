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
        
        vector<int>v;
        int pos(0);
        
        while(n > 0){
            int digit = n%10;
            if(digit != 0){
                v.push_back(digit * pow(10,pos));
            }
            n/=10;
            pos++;
        }
        
        cout << v.size() << endl;
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
