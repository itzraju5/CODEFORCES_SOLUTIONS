#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int cnt = 0, res;
        for(int i=1; i<2*n; i++)
        {
            if(i%3 != 0 && i%10 != 3){
                cnt++;
            }
            if(cnt == n){
                res = i;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}