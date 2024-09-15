#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    
    long long sum = (n*(n+1))/2;
    if(sum % 2 == 0) cout << 0;
    else cout << 1;
    
    return 0;
}

