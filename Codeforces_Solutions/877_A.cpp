#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string problems;
    cin >> problems;
    
    string friends [] = { "Danil", "Olya", "Slava", "Ann","Nikita"};
    
    int cnt(0);
    for(auto &name: friends)
    {
        int pos = problems.find(name);
        while(pos != string::npos)
        {
            cnt++;
            pos = problems.find(name, name.length()+pos);
        }
    }
    if(cnt == 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}
