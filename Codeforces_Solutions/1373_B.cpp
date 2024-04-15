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
       int cnt0(0);
       int cnt1(0);
       
       for(int i=0; i<s.length(); i++)
       {
           if(s[i] == '0') cnt0++;
           else cnt1++;
       }
       
       int totalpair = min(cnt0, cnt1);
       if(totalpair % 2 != 0){
           cout << "DA" << endl;
       }
       else{
           cout << "NET" << endl;
       }
   }
    
    return 0;
}