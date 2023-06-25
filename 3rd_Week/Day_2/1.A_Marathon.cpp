#include <bits/stdc++.h>
using namespace std;
#define long long ll

const int N=1e5+5;
const int mod=1e9+7;
int a[N];

int v[4];

void solve()
{
    for(int i=0; i<4; i++) {
        cin>> v[i];
    }

    int ans = 0;
    for(int i=1; i<4; i++) {
        ans+=v[i]>v[0];
    }

    cout<< ans<< "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>> t;
    while(t--) {
        solve();
    }
}