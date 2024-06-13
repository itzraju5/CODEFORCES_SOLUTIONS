#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        stack<char> st;
        for(auto &ch: s)
        {
            if(ch == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
        cout << st.size()/2 << endl;
    }
    
    return 0;
}