#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int cnt(0);
        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == ')') cnt++;
            else break;
        }
        
        if(cnt > n-cnt){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
