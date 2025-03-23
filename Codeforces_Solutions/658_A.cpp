#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, c;
    cin >> n >> c;
    
    vector<int> p(n), t(n);
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> t[i];
    
    int ans1(0), ans2(0), time1(0), time2(0);
    for(int i=0; i<n; i++){
        time1 += t[i];
        time2 += t[n-i-1];
        ans1 += max(0, p[i] - c * time1);
        ans2 += max(0, p[n-i-1] - c * time2);
    }
    
    if(ans1 > ans2) cout << "Limak";
    else if(ans1 < ans2) cout << "Radewoosh";
    else cout << "Tie";
    
    return 0;
}

  