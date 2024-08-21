#include <bits/stdc++.h>
using namespace std;


int main() {
    
    long long n, x;
    cin >> n >> x;
    
    long long cnt = x;
    long long ans(0);
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        long long d;
        cin >> d;
        if(s[0] == '+')
        {
            cnt += d;
        }else if(cnt >= d){
            cnt -= d;
        }else{
            ans++;
        }
    }
    cout << cnt << " " << ans;
    
    return 0;
}
