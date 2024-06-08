#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int i=0, j=n-1;
    int alice_time = 0, bob_time = 0;
    int alice_cnt = 0, bob_cnt = 0;
    while(i<=j)
    {
        if(alice_time <= bob_time)
        {
            alice_time += v[i];
            alice_cnt++;
            i++;
        }
        else
        {
            bob_time += v[j];
            bob_cnt++;
            j--;
        }
    }
    cout << alice_cnt << " " << bob_cnt;
    
    return 0;
}


