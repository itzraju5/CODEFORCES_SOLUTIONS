#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   
   vector<int> v(n);
   for(int i=0; i<n; i++) cin >> v[i];
   int mini = v[0], maxi = v[0], cnt = 0;
   for(int i=1; i<n; i++)
   {
       if(maxi < v[i])
       {
           cnt++;
           maxi = max(maxi, v[i]);
       }
       else
       {
           if(mini > v[i])
           {
               cnt++;
               mini = min(mini, v[i]);
           }
       }
   }
   cout << cnt;
   
   return 0;
}