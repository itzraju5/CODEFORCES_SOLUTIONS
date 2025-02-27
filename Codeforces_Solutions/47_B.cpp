#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    int arr[] = {0, 0, 0};
    string inputs[] = {s1, s2, s3};
    
    for(auto s: inputs){
        if(s[1] == '>'){
            if(s[0] == 'A') arr[0]++;
            else if(s[0] == 'B') arr[1]++;
            else arr[2]++;
        }else{
            if(s[2] == 'A') arr[0]++;
            else if(s[2] == 'B') arr[1]++;
            else arr[2]++;
        }
    }
    pair<int, char> coins[] = {{arr[0], 'A'}, {arr[1], 'B'}, {arr[2], 'C'}};
    sort(coins, coins+3);
    
    if(coins[0].first == coins[1].first || coins[1].first == coins[2].first){
        cout << "Impossible" << endl;
    }else{
        cout << coins[0].second << coins[1].second << coins[2].second;
    }
    return 0;
}

