#include<bits/stdc++.h>
using namespace std;

bool solve(string &a, string &b){
    if(b.find(a) != string::npos) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<string>v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end(), [](string &a, string &b){
        return a.size() < b.size();
    });
    
    for(int i=0; i<v.size()-1; i++){
        if(!solve(v[i], v[i+1])){
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    for(auto &str:v){
        cout << str << endl;
    }
    
    return 0;
}