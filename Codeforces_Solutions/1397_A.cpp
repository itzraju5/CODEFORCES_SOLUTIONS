#include<bits/stdc++.h>
using namespace std;

bool solve(vector<string>&v, int n)
{
    vector<int> temp(26,0);
    for(auto &str: v)
    {
        for(auto &ch: str) temp[ch-'a']++;
    }
    
    for(int i=0; i<26; i++)
    {
        if(temp[i] % n != 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<string>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        if(solve(v, n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}