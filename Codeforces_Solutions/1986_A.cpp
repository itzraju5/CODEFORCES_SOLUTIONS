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
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        int dis1 = abs(x1-x1) + abs(x2-x1) + abs(x3-x1);
        int dis2 = abs(x1-x2) + abs(x2-x2) + abs(x3-x2);
        int dis3 = abs(x1-x3) + abs(x2-x3) + abs(x3-x3);
        
        cout << min({dis1, dis2, dis3}) << endl;
        
    }
    return 0;       
}

