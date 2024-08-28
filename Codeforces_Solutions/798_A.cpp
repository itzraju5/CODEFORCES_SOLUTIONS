#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    
    int i=0, j=s.length()-1, cnt=0;
    while(i<=j)
    {
        if(s[i] != s[j]) cnt++;
        i++;
        j--;
    }
    
    if(s.length()%2 == 0 && cnt == 1){
        cout << "YES";
    }else if(s.length()%2 != 0 && (cnt == 1 || cnt == 0)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}

/*

    NOTE: If the string is already a palindrome and has an odd length, like "racecar",
    you can still change the middle character without affecting the palindrome property. So (cnt==1)
 
*/
 