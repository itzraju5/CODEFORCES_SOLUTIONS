#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;
   
   vector<int> v(n);
   for(int i=0; i<n; i++) cin >> v[i];
   int score = v[k-1], cnt = 0;
   for(int i=0; i<n; i++)
   {
       if(v[i] >= score && v[i] != 0) cnt++;
   }
   cout << cnt;
   
   return 0;
}