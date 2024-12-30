#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
        
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
        
    int mini = INT_MAX;
    int first = -1, second = -1;
    for(int i=0; i<n-1; i++){
        if(abs(v[i] - v[i+1]) < mini){
            first = i+1;
            second = i+1+1;
            mini = abs(v[i]-v[i+1]);
        }
    }
        
    if(abs(v[0] - v[n-1]) < mini){
        first = 1;
        second = n;
        mini = abs(v[0]-v[n-1]);
        cout << first << " " << second << endl;
    }else{
        cout << first << " " << second << endl;
    }

    return 0;
}
