#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        if(n==1) cout << 2 << endl;
        else if(n%3 == 0) cout << n/3 << endl;
        else cout << n/3 + 1 << endl;
    }
    
    return 0;
}

  