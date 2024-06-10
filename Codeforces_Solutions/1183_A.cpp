#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int sum(0);
    while(n!=0)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int solve(int a)
{
    while(true)
    {
        if(digit_sum(a) % 4 == 0)
        {
            return a;
        }
        a++;
    }
}

int main()
{
    int a;
    cin >> a;
    cout << solve(a);
    return 0;
}