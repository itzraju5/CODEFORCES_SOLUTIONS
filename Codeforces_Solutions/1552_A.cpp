#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        string res = s;
        sort(res.begin(), res.end());
        
        int cnt(0);
        for(int i=0; i<n; i++)
        {
            if(s[i] != res[i]) cnt++;
        }
        cout << cnt << endl;
    }
	
	return 0;
}