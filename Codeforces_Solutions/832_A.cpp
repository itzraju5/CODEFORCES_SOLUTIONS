#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    
    long long moves = n/k;
    
    if(moves % 2 != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}