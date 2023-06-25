#include <bits/stdc++.h>
using namespace std;

void fast() 
{
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();

    int t;
    cin>> t;
    while(t--) {
        map<int, int> m;
        int x, ans=-1, n;
        cin>> n;
        for(int i=0; i<n; i++) {
            cin>> x;
            m[x]++;
        }

        for(auto it:m) {
            if(it.second>=3) {
                ans=it.first;
                break;
            }
        }

        cout<< ans<< "\n";
    }

    return 0;
}