#include <bits/stdc++.h>
using namespace std;

bool solve(int x)
{
    for(int i=0; 3*i<=x; i++)
    {
        int remain = x-3*i;
        if(remain % 7 == 0) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    while(n--)
    {
        int x;
        cin >> x;
        
        if(solve(x)){
            cout << "YES" << endl;
        }else{
            cout <<  "NO" << endl;
        }
    }
     
    return 0;
}
