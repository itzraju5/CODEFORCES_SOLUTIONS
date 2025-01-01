#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    
    int arr[] = {a,b,c};
    sort(arr, arr+3);
    
    if(arr[0] + arr[1] > arr[2]){
        cout << "0" << endl;
    }else{
        cout << arr[2] - (arr[0] + arr[1]) + 1 << endl;
    }

    return 0;
}