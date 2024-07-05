#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    int temp=0, cnt=0;
    for(int i=1; i<n; i++)
    {
        temp = i+i*((n-i)/i);
        if(temp==n) cnt++;
    }
    cout << cnt;
    return 0;
}

