#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int cnt(1);
    vector<int> steps;
    for(int i=1; i<n; i++){
        if(v[i] != 1){
            cnt++;
        }else{
            steps.push_back(cnt);
            cnt = 1;
        }
    }
    steps.push_back(cnt);
    cout << count(v.begin(), v.end(), 1) << endl;
    for(auto i: steps){
        cout << i << " ";
    }

    return 0;
}
