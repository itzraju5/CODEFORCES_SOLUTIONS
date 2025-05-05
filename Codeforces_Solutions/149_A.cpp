#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int k){
    sort(v.rbegin(), v.rend());
    int cal_cm(0), cnt_months(0);
    for(int i=0; i<12; i++){
        if(cal_cm < k){
            cal_cm += v[i];
            cnt_months++;
        }
        if(cal_cm >= k) return cnt_months;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    cin >> k;
    
    vector<int> v(12);
    for(int i=0; i<12; i++) cin >> v[i];
    
    cout << solve(v, k) << endl;
    
    return 0;
}


/* Python Solution :)


def main(v, k):
    v.sort(reverse=True)
    cal_cm, cnt_months = 0, 0
    for i in range(12):
        if cal_cm < k:
            cal_cm += v[i]
            cnt_months += 1
        if cal_cm >= k: 
            return cnt_months
    return -1
    
k = int(input())
v = list(map(int, input().split()))
if __name__ == '__main__':
    print(main(v, k))

*/