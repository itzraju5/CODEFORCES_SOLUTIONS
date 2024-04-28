#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i=0; i<n; i++)
    {
        int nm;
        cin >> nm;
        if(nm == 1) cnt1++;
        else if(nm == 2) cnt2++;
        else cnt3++;
    }
    int maxi = max(max(cnt1, cnt2), cnt3);
    cout << n-maxi;
        
    return 0;
}
