#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    
    int cnt(0);
    stack<char>st;
    for(auto &ch:s)
    {
        // ensure that the stack is not empty before calling st.top() ex: ")("
        if(ch == ')' && !st.empty() && st.top() == '(') 
        {
            st.pop();
            cnt += 2;
        }
        else
        {
            st.push(ch);
        }
    }
    cout << cnt;
    
    return 0;
}