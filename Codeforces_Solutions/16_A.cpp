#include<bits/stdc++.h>
using namespace std;

bool solve(vector<vector<char>>&nums, int n, int m) {
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m-1; j++) if(nums[i][j] != nums[i][j+1]) return false;
    }
    
    for(int i=0; i<n-1; i++)
    {
        if(nums[i][0] == nums[i+1][0] ) return false;
    }
    
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<char>> v(n, vector<char>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }
    
    if(solve(v, n, m)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
