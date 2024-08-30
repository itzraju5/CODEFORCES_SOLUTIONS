#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cin.ignore();
    
    string text;
    getline(cin, text);
    
    stringstream ss(text);
    
    string word;
    int max_vol = INT_MIN;
    while(ss >> word)
    {
        int cnt = 0;
        for(auto ch: word)
        {
            if(isupper(ch)){
                cnt++;
            }
        }
        max_vol = max(max_vol, cnt);
    }
    
    cout << max_vol << endl;
    
    return 0;
}

