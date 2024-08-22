#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int>v(5);
    for(int i=0; i<5; i++) cin >> v[i];
    
    unordered_map<int, int> mp;
    for(auto &i:v) mp[i]++;
    
    int temp(0);
    for(auto &el:mp)
    {
        int key = el.first;
        int val = el.second;
        if(val >= 3){
            temp = max(temp, key*3);
        }else if(val >= 2){
            temp = max(temp, key*2);
        }
    }
    
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum - temp;
    
    return 0;
}
