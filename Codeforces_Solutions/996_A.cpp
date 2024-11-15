#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int bills(0);
    
    bills = bills + n / 100;
    n = n % 100;
    
    bills = bills + n / 20;
    n = n % 20;
    
    bills = bills + n / 10;
    n = n % 10;
    
    bills = bills + n / 5;
    n = n % 5;
    
    bills = bills + n;
    
    cout << bills << endl;
    
	return 0;
}