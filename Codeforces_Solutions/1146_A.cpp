#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int cnt = 0;
    int n = s.length();
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a') cnt++;
    }
    while(n != 0)
    {
        if(n/2 < cnt)
        {
            cout << n;
            break;
        }
        n--;
    }
    return 0;
}