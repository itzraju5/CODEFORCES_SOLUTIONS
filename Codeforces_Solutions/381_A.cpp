#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int sereja = 0, dima = 0, i = 0, j=n-1;
    
    bool firstturn = true;
    while(i<=j)
    {
        if(firstturn)
        {
            sereja += max(v[i], v[j]);
        }
        else
        {
            dima += max(v[i], v[j]);
        }
        
        if(v[i] < v[j])
        {
            j--;
        }
        else
        {
            i++;
        }
        firstturn = !firstturn;
    }
    cout << sereja << " " << dima << endl;
    
    return 0;
}