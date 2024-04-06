#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n, m, a;
    cin >> n >> m >>a;  
    ll res = 0;
    
    res += ceil((double)n/a) * ceil((double)m/a);
    cout << res <<endl;
    return 0;
}

/*
    ceil of 5.384 is 6
    floor of 3.184 is 3
    ceil of 6.892 is 7
    floor of 15.764 is 15
*/
