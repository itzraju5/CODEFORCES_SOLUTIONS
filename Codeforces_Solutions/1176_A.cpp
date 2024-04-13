#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        
        while(n > 1)
        {
            if(n%2 == 0)
            {
                n = n/2;
                cnt++;
            }
            else if(n%3 == 0)
            {
                n = (2*n)/3;
                cnt++;
            }
            else if(n%5 == 0)
            {
                n = (4*n)/5;
                cnt++;
            }else if(n%2 != 0 && n%3 != 0 && n%5 != 0)
            {
                cout << -1 << endl;
                break;
            }
            if(n==1)
            {
                cout << cnt << endl;
                break;
            }
        }
    }
    
    return 0;
}