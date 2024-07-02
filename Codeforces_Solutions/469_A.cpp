#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int p;
    cin >> p;
    set<int>st;
    
    for(int i=0; i<p; i++) 
    {
        int num;
        cin >> num;
        st.insert(num);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++) 
    {
        int num;
        cin >> num;
        st.insert(num);
    }
    
    if(st.size() == n)
        cout << "I become the guy.";
    else 
        cout << "Oh, my keyboard!";
            
    return 0;
}
