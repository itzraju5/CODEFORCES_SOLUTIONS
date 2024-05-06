#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int i, j, k;
    for(i=0; i<n-1; i++)
    {
        if(v[i]<v[i+1]){
            continue;
        }
        else
        {
            break;
        }
    }
    for(j=i; j<n-1; j++)
    {
        if(v[j]==v[j+1]){
            continue;
        }
        else
        {
            break;
        }
    }
    for(k=j; k<n-1; k++)
    {
        if(v[k]>v[k+1]){
            continue;
        }
        else
        {
            break;
        }
    }

    if(i==n-1 || j==n-1 || k==n-1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
