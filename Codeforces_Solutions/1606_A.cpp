#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        
        int ab_cnt = 0, ba_cnt = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s.substr(i,2) == "ab") ab_cnt++;
            if(s.substr(i,2) == "ba") ba_cnt++;
        }
        // here notice one thing the difference between ab and ba occurence is not greater than 1.
        if(ab_cnt == ba_cnt)
        {
            cout << s << endl;
        }
        else
        {
            if(ab_cnt > ba_cnt)
            {
                for(int i=0; i<s.length(); i++)
                {
                    if(s[i] == 'a'){
                        s[i] = 'b';
                        break;
                    }
                }
            }
            else
            {
                for(int i=0; i<s.length(); i++)
                {
                    if(s[i] == 'b'){
                        s[i] = 'a';
                        break;
                    }
                }
            }
            cout << s << endl;
        }
    }
    
    return 0;
}