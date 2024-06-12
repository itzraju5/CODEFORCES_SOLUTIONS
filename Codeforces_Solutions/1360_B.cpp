#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int n)
{
    sort(begin(v), end(v));
    int mini = INT_MAX;
    for(int i=1; i<n; i++) mini = min(mini, (v[i]-v[i-1]));
    return mini;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int res = solve(v, n);
        cout << res << endl;
    }
    return 0;
}