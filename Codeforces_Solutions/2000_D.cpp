#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        string s;
        cin >> s;
        
        long long sum = accumulate(begin(v), end(v), 0LL);
        int i=0, j=n-1;
        long long ans(0);
        while(i<j)
        {
            if(s[i]=='L' && s[j]=='R'){
                ans += sum;
                sum -= (v[i] + v[j]);
                i++;
                j--;
            }else if(s[i]=='R'){
                sum -= v[i];
                i++;
            }else if(s[j]=='L'){
                sum -= v[j];
                j--;
            }
        }
        cout << ans << endl;
    }
    return 0;       
}

