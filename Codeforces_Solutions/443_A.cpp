#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> st;
    
    for(int i=0; i<s.length(); i++)
    {
        if(isalpha(s[i])) st.insert(s[i]);
    }
    cout << st.size();

    return 0;
}
