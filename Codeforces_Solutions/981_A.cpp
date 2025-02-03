#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    int i=0, j=s.length()-1;
    
    while(i<j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    string s;
    cin >> s;
    
    if(!isPalindrome(s)){
        cout << s.length() << endl;
        return 0;
    }
    
    bool allSame = true;
    for(int i=1; i<s.length(); i++){
        if(s[i] != s[0]){
            allSame = false;
            break;
        }
    }
    
    if(allSame){
        cout << 0 << endl;
    }else{
        cout << s.length() -1 << endl;
    }
    
    return 0;
}
