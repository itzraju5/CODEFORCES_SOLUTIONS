#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        
        for(int i = 0; i < n; i++) cin >> v[i];
        
        
        vector<int> res;
        int left = 0, right = n - 1;
        
        while(left <= right)
        {
            res.push_back(v[left]);
            left++;
            
            res.push_back(v[right]);
            right--;
        }
        
        for(int i = 0; i < n; ++i) 
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
