#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long n;
	cin >> n;
	
	vector<int>v(n-1);
	for(int i=0; i<n-1; i++) cin >> v[i];
	
	long long total_sum = (n*(n+1))/2;
	long long sum = accumulate(begin(v), end(v), 0LL);
	
	cout << total_sum - sum;
	
	return 0;
}