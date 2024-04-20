#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, el, arr[5001]={0};
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> el;
        arr[el]++;
    }
    cout << count(arr+1, arr+n+1, 0);
    
    return 0;
}