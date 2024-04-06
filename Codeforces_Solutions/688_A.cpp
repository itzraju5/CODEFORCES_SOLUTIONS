#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, d;
    cin >> n >> d;
    
    int maxi = 0;
    int cnt = 0;
    
    for(int i=0; i<d; i++)
    {
        string res;
        cin >> res;
        if(res.find('0') != string::npos)
        {
            cnt++;
            maxi = max(cnt, maxi);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << maxi;
 
    return 0;
}