#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin>>s;
    int n = s.length();
    // These are the character that have same mirror reflection
    unordered_set<char> st = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    
    for(int i=0; i<n; i++)
    {
        if(st.find(s[i]) == st.end()){
            cout << "NO";
            return 0;
        }
    }
	
    // we have to check here Palindrome
	for(int i=0; i<n/2; i++)
	{
	    if(s[i] != s[n-1-i])
	    {
	        cout << "NO";
	        return 0;
	    }
	}
	cout << "YES";
	return 0;
}
