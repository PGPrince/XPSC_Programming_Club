#include <bits/stdc++.h>
#define ll long long int 
#define endl "\n"
#define M 1000000007

using namespace std;

void solve() {
    ll n;
    cin>> n;
    ll a[n], i, sum=0, mn=M;
    for(i=0; i<n; i++) {
        cin>> a[i];
        sum += a[i];
        mn = min(mn, a[i]);
    }

    ll ans = sum - mn*n;
    cout<< ans;

    cout<< "\n";
}

int main()
{
    int t;
    cin>> t;
    while(t--) {
        solve();
    }
}