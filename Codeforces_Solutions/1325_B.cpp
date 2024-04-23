#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long t;
    cin >> t;
 
    while (t--)
    {
        long long n;
        cin >> n;
 
        set<long long> s;
        for (long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }
 
        cout << s.size() << endl;
    }
 
    return 0;
}