#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        if(num % 2 != 0){
            cout << "First";
            return 0;
        }
    }
    cout << "Second";
}