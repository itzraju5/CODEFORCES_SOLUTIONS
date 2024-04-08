#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2, d3;
    cin >> d1 >> d2 >> d3;

    int len1 = 2*d1 + 2*d2;
    int len2 = d1 + d2 + d3;
    int len3 = 2*d1 + 2*d3;
    int len4 = 2*d2 + 2*d3;

    cout << min(min(len1, len2), min(len3, len4));

    return 0;
}