#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    if(a==b || a%b==0){
        return 0;
    }else if(a < b){
        return b-a;
    }else{
        return b-(a%b);
    }
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    
    return 0;
}