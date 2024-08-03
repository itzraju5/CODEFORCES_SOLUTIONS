#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int mini = *min_element(begin(v), end(v));
    int maxi = *max_element(begin(v), end(v));
    
    cout << (maxi-mini+1) - n << endl;
    
    return 0;
}