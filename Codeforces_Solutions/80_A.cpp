#include<bits/stdc++.h>
using namespace std;

bool isprime(int nn)
{
    for(int i=2; i<=sqrt(nn); i++)
    {
        if(nn % i == 0) return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    for(int i=n+1; i<=57; i++)
    {
        if(isprime(i))
        {
            if (i == m){
                cout << "YES";
                return 0;
            }else{
                cout << "NO";
                return 0;
            }
        }
    }
    
    return 0;
}

// Here we use i<=57 becaue after 50 the next prine no is 57.
