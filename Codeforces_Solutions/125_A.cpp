#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int feets = n / 36;
    
    int remaincm = n%36;
    
    int inches = round(remaincm/3.0);
    if(inches == 12)
    {
        feets++;
        inches = inches - 12;
    }
    
    cout << feets << " " << inches;
    
    return 0;
}

/*
    suppose n = 71
    output      2 0
*/
