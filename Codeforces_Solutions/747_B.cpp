#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int n){
    if(n%4 != 0){
        cout << "===" << endl;
        return;
    }
    
    int question_marks(0);
    vector<int>v(4,0);
    for(auto ch: s){
        if(ch == 'A') v[0]++;
        else if(ch == 'C') v[1]++;
        else if(ch == 'G') v[2]++;
        else if(ch == 'T') v[3]++;
    }
    
    int target = n/4;
    for(auto i: v){
        if(i > target){
            cout << "===" << endl;
            return;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] =='?'){
            if(v[0] < target){
                s[i] = 'A';
                v[0]++;
            }else if(v[1] < target){
                s[i] = 'C';
                v[1]++;
            }else if(v[2] < target){
                s[i] = 'G';
                v[2]++;
            }else if(v[3] < target){
                s[i] = 'T';
                v[3]++;
            }
        }
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    string s;
    cin >> n >> s;
    
    solve(s, n);
    
    return 0;
}