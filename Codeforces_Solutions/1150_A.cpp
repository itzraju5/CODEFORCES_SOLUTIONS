#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, int r, vector<int> & buy, vector<int> &sell){
    int min_buy = *min_element(buy.begin(), buy.end());
    int max_sell = *max_element(sell.begin(), sell.end());
    
    int cnt(0);
    if(max_sell > min_buy){
        cnt = r / min_buy;
        r = r % min_buy;
        int profit = (max_sell * cnt) + r;
        return profit;
    }else{
        return r;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
    int n, m, r;
    cin >> n >> m >> r;
    
    vector<int> buy(n), sell(m);
    for(int i=0; i<n; i++) cin >> buy[i];
    for(int i=0; i<m; i++) cin >> sell[i];
    
    cout << solve(n, m, r, buy, sell) << endl;
    return 0;
}
