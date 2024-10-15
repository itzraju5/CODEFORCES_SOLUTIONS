#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
    // in this Question mention that:
    // input: input.txt
    // output: output.txt
	// File input and output handling
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    
	int n, m;
	inFile >> n >> m;
	
	string res="";
	if(n>=m){
	    while(n>0 || m>0){
	        if(n>0){
	            res += "B";
	            n--;
	        }
	        if(m>0){
	            res += "G";
	            m--;
	        }
	    }
	}else{
	    while(n>0 || m>0){
	        if(m>0){
	            res += "G";
	            m--;
	        }
	        if(n>0){
	            res += "B";
	            n--;
	        }
	    }
	}
	
	outFile << res << endl;
	
	return 0;
}