#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int mini = *min_element(begin(v), end(v));
        
        int mini_cnt = count(v.begin(), v.end(), mini);
        
        cout << n-mini_cnt << endl;
    }
    
    return 0;
}

// If all elements are the same, no deletions will occur
// because the average will always equal each element.

