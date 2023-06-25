#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();

    ll t;
    cin>> t;
    while(t--) {
        int n;
        cin>> n;
        string s;
        vector<vector<string>> v(3);
        vector<int> ans(3,0);
        map<string, int> m;
        for(int i=0; i<3; i++) {
            for(int j=0; j<n; j++) {
                cin>> s;
                v[i].push_back(s);
                m[s]++;
            }
        }

        for(int i=0; i<3; i++) {
            for(auto x:v[i]) {
                if(m[x]==1) {
                    ans[i]+=3;
                }
                else if(m[x]==2) {
                    ans[i]+=1;
                }
            }
        }
        cout<< ans[0]<< " "<< ans[1]<< " "<< ans[2]<< "\n";
    }


    return 0;
}