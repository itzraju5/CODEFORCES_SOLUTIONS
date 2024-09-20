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
        
        int last = s.rfind('1');
        
        bool flag = false;
        int cnt0(0);
        for(int i=0; i<=last; i++){
            if(s[i] == '1'){
                flag = true;
            }
            if(flag && s[i] == '0') cnt0++;
        }
        cout << cnt0 << endl;
    }
    
    return 0;
}

