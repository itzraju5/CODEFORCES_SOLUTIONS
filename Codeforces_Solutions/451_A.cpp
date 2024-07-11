#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int min_val = min(a,b); // min_val times run game
    if(min_val % 2 != 0){
        cout << "Akshat";
    }
    else{
        cout << "Malvika";
    }
    
    return 0;
}

