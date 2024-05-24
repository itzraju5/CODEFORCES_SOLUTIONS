#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if(s.find('0') != string::npos)
    {
        int indx = s.find('0');
        cout << s.substr(0,indx) << s.substr(indx+1);
    }
    else
    {
        cout << s.substr(1);
    }
    return 0;
}
