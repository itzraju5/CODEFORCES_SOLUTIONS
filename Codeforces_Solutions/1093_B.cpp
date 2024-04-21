#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        set<char>st;
        for(int i=0; i<s.length(); i++)
        {
            st.insert(s[i]);
        }
        
        if(st.size() == 1)
        {
            cout <<"-1"<<endl;
        }else if(s != rev || s == rev){
            sort(s.begin(), s.end());
            cout << s << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    
    return 0;
}