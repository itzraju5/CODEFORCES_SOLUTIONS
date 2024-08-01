#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int l=-1,r=-1;
    for(int i=1; i<n; i++)
    {
        if(s[i]<s[i-1]){
            l=i-1;
            r=i;
            break;
        }
    }
    if(l>-1 && r>-1)
    {
        cout << "YES" << endl;
        cout << l+1 <<" "<< r+1;
    }
    else
    {
        cout <<"NO";
    }

    return 0;
}
