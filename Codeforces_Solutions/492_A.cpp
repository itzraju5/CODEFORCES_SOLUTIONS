#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int cnt(0), used_cubes(0);
    for(int i=1; ; i++){
        int curr_cubes = (i * (i + 1)) / 2;
        if(curr_cubes + used_cubes > n){
            break;
        }
        used_cubes += curr_cubes;
        cnt++;
    }
    cout << cnt << endl;
    
	return 0;
}