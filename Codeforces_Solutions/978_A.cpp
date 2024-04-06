#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
 
    set<int> st;
    vector<int> res;
    
    for(int i=n-1; i>=0; i--)
    {
        if(st.find(a[i]) == st.end())
        {
            res.push_back(a[i]);
            st.insert(a[i]);
        }
    }
 
    cout << res.size() << endl;
    for(int i = res.size()-1; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    cout << endl;
 
    return 0;
}