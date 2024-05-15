#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string a, b;
	cin >> a >> b;
    
    int cnt_4to7 = 0, cnt_7to4 = 0;
    for(int i=0; i<a.length();i++)
    {
        if(a[i] != b[i]){
            if(a[i] == '4') cnt_4to7++;
            else cnt_7to4++;
        }
    }
    cout << max(cnt_4to7, cnt_7to4);
    return 0;
}