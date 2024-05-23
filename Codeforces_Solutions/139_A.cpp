#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int>v(7);
    
    for(int i=0; i<7; i++) cin >> v[i];
    
    int sum = v[0], i = 0;
    while(sum < n)
    {
        i++;
        i %= 7;
        sum += v[i];
    }
    cout << i+1;
    return 0;
}
