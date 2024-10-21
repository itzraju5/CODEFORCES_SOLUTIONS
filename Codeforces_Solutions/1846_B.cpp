#include <bits/stdc++.h>
using namespace std;

bool check(char c, vector<string> &v)
{
    for(int i=0; i<3; i++){
        if(v[i][0] == c && v[i][1] == c && v[i][2] == c) return true;
        if(v[0][i] == c && v[1][i] == c && v[2][i] == c) return true;
    }
    // Diagonal check
    if(v[0][0] == c && v[1][1] == c && v[2][2] == c) return true;
    if(v[0][2] == c && v[1][1] == c && v[2][0] == c) return true;
    
    return false;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    vector<string> v(3);
	    for(int i=0; i<3; i++) cin >> v[i];
	    
	    if(check('X', v)){
	        cout << "X" << endl;
	    }else if(check('O', v)){
	        cout << "O" << endl;
	    }else if(check('+', v)){
	        cout << "+" << endl;
	    }else{
	        cout << "DRAW" << endl;
	    }
	}
	
	return 0;
}