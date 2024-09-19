#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        char c;
        cin >> c;
        
        vector<int>v;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == c){
                v.push_back(i);
            }
        }
        
        bool flag = false;
        for(auto el: v){
            if(el % 2 == 0){
                flag = true;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}

