#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int i=0, j=s.length()-1;
    
    bool append = s.length()%2==0;
    
    string res="";
    while(i<=j)
    {
        if(append)
        {
            res = s[j]+res;
            j--;
        }
        else
        {
            res = s[i]+res;
            i++;
        }
        append = !append;
    }
    
    cout << res << endl;
    
    return 0;
}