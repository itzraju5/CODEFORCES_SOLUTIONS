#include <bits/stdc++.h>
using namespace std;

int main() {
    long long num;
    cin >> num;
    
    long long even_no = num/2;
    long long sum_even = even_no * (even_no+1);
    long long odd_no = num%2 == 0 ? num/2 : (num/2+1);
    long long sum_odd = odd_no*odd_no; // this should be -ve  because -(n*n)
    
    long long res = sum_even - sum_odd;
    cout << res;
    
    return 0;
}

// Try to use this formula:
// sum of nth term = n/2 *(2a + (n-1)d)