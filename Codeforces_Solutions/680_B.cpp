#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n,a;
    cin >> n >> a;
    a--;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int cnt(0);
    if(v[a] == 1) cnt++;
    
    for(int i=1; i<n; i++)
    {
        int left = a-i;
        int right = a+i;
        
        if(left >= 0 && right < n)
        {
            if(v[left] == 1 && v[right] == 1)
            {
                cnt += 2;
            }
        }else if(left < 0 && right < n){
            if(v[right] == 1) cnt++;
        }else if(right >= n && left >= 0){
            if(v[left] == 1) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}
