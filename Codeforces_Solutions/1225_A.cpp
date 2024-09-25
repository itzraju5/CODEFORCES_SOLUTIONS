#include <bits/stdc++.h>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;
	
	if(a==b){
	    cout << a*100+1 << " " << b*100+2;
	}else if(a+1 == b){
	    cout << a*100 + 99 << " " << b*100;
	}else if(a==9 && b==1){
	    cout << 99 << " " << 100;
	}else{
	    cout << -1;
	}
	
	return 0;
}
