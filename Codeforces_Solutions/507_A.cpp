#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    vector<pair<int, int>> p;
    
    for(int i=0; i<n; i++) p.push_back({v[i], i+1});
    sort(begin(p), end(p));
    
    int sum = 0;
    vector<int>res;
    for(auto &el:p)
    {
        if(sum + el.first <= k)
        {
            res.push_back(el.second);
            sum = sum + el.first;
        }
        else
        {
            break;
        }
    }
    
    cout << res.size() << endl;
    for(auto &i:res)
    {
        cout << i << " ";
    }
    
    return 0;
}
