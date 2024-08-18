#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(begin(v), end(v));
    
    vector<int>res(n);
    int i=0, j=n-1, k=0;
    while(i<j)
    {
        res[k++] = v[i++];
        res[k++] = v[j--];
    }
    if(n%2 != 0) res[k] = v[i];
    
    bool isSorted = true;
    for(int i=1; i<n; i++)
    {
        if(i%2 == 0 && res[i]>res[i-1])
        {
            isSorted = false;
            break;
        }
        if(i%2 != 0 && res[i-1] > res[i])
        {
            isSorted = false;
            break;
        }
    }
    
    if(isSorted)
    {
        for(auto &el:res) cout << el << " ";
    }else{
        cout << "Impossible";
    }
    
    return 0;
}
