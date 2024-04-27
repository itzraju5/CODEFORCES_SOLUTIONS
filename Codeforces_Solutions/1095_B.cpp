#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int n)
{
    sort(nums.begin(), nums.end());
    if(n==2) return 0;
    int a = nums[n-2] - nums[0]; // if we remove right side max element 
    int b = nums[n-1] - nums[1]; // if we remove left side min element
    return min(a,b);
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    cout << solve(v, n);
    return 0;
}