#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int a(1), b(1), c(n-2);
    
    if(c%3 == 0){
        b++;
        c--;
    }
    
    cout << a << " " << b << " " << c;

    return 0;
}
