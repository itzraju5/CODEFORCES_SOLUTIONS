#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        int cnt = 0;
        while(n!=1)
        {
            if(n%6 == 0)
            {
                n = n/6;
                cnt++;
            }
            else if(n%3 == 0)
            {
                n = n*2;
                cnt++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
    return 0;
}