#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int crime(0);
    int off(0);
    for(int i=0; i<n; i++)
    {
        int event;
        cin >> event;
        
        if(event == -1)
        {
            if(off > 0)
            {
                off--;
            }
            else
            {
                crime++;
            }
        }
        else
        {
            off += event;
        }
    }

    cout << crime << endl;
    
    return 0;
}