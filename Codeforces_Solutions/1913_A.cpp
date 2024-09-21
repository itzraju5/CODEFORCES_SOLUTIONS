#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        
        bool flag = false;
        
        for(int i=1; i<s.length(); i++)
        {
            string first = s.substr(0,i);
            string second = s.substr(i);
            
            int a = stoi(first);
            int b = stoi(second);
            
            if(first[0] != '0' && second[0] != '0' && b>a){
                cout << first << " " << second << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
    
    return 0;
}




