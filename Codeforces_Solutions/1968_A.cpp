#include<bits/stdc++.h>
using namespace std;

int cal_gcd(int a, int b)
{
    while(a != b)
    {
        if(a>b) a = a-b;
        if(b>a) b = b-a;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x;
        cin >> x;
        
        int res = 1, maxsum = 0;
        for(int y=1; y<x; y++)
        {
            int current_gcd = cal_gcd(y, x);
            int sum = current_gcd + y;
            if(maxsum < sum)
            {
                maxsum = sum;
                res = y;
            }
        }
        cout << res << endl;
    }
    return 0;
}
