#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b){
    if(a == b) return 0;
    if(a > b and (a-b) % 2 == 0){
        return 1;
    }
    if(a > b and (a-b) % 2 != 0){
        return 2;
    }
    if(b > a and (b-a) % 2 != 0){
        return 1;
    }
    if(b > a and (b-a) % 2 == 0){
        return 2;
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    
	return 0;
}

