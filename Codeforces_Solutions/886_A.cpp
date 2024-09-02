#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0; i<6; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    } 
    int sum = accumulate(begin(v), end(v), 0);
    if(sum %2 != 0){
        cout << "NO";
        return 0;
    }
    int half = sum/2;
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            for(int k=j+1; k<6; k++)
            {
                if(v[i]+v[j]+v[k] == half){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    
    return 0;
}
