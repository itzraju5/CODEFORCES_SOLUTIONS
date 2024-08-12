#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    set<pair<string, string>>st;
    for(int i=0; i<n; i++)
    {
        string s, c;
        cin >> s >> c;
        st.insert({s, c});
    }
    cout << st.size();
    
    return 0;
}
