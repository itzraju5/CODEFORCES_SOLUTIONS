#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while(t--){
        string a, b;
        cin >> a >> b;  
        
        swap(a[0], b[0]);
        
        cout << a << " " << b << endl;
    }
    
    return 0;
}

