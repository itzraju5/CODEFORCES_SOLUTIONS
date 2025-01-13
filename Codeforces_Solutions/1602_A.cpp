#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        char minChar = *min_element(s.begin(), s.end());
        size_t pos = s.find(minChar);

        string a(1, minChar);
        string b = s.substr(0, pos) + s.substr(pos + 1);

        cout << a << " " << b << endl;
    }
    
    return 0;
}
