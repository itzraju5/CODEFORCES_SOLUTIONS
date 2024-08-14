#include <bits/stdc++.h>
using namespace std;


int main() {
    
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    string res = s;
    for(int i=0; i<n; i++)
    {
        string temp;
        cin >> temp;
        
        if(temp.find(s) == 0)
        {
            if(temp < res){
                res = temp;
            }
        }
    }
    cout << res;
    
    return 0;
}
