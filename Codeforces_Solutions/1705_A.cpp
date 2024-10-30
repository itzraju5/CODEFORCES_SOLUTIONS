#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        
        vector<int>v(2*n);
        for(int i=0; i<2*n; i++) cin >> v[i];
        
        bool flag = true;
        sort(begin(v), end(v));
        for(int i=0; i<n; i++)
        {
            if(v[n + i] - v[i] < x){
                flag = false;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}