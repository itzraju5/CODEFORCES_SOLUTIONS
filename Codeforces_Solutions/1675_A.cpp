#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        
        int dog_needs = max(0, x-a);
        int cat_needs = max(0, y-b);
        
        if(dog_needs + cat_needs <= c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
	return 0;
}
