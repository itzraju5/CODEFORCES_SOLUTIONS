#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int cnt(0);
    while(n--){
        int p, q;
        cin >> p >> q;
        if(q-p >= 2) cnt++;
    }
    cout << cnt;
    
    return 0;
}

