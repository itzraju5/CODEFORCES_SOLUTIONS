#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    
    long long cal = (k*w*w + k*w)/2;
    long long res = max(0LL, cal-n);
    cout << res;

    return 0;
}