#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    int k; 
    cin >> k;
    
    while(k--){
        if(n%10 == 0){
            n = n/10;
        }else{
            n=n-1;
        }
    }
    cout << n;
    
    return 0;       
}

