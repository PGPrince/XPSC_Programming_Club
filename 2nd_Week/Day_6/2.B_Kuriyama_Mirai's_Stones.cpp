#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin>> n;
    ll ar[n+2];
    ll br[n+2];

    for(int i=1; i<=n; i++) {
        cin>> ar[i];
        br[i]=ar[i];
    }

    ll prel[n+2];
    prel[0]=0;

    for(int i=1; i<=n; i++) {
        prel[i]=prel[i-1]+ar[i];
    }

    sort(br+1, br+n+1);

    ll pre2[n+3];
    pre2[0]=0;

    for(int i=1; i<=n; i++) {
        pre2[i]=pre2[i-1]+br[i];
    }

    int q;
    cin>> q;
    while(q--) {
        int k, l, r;
        cin>> k>> l>> r;
        if(k==1) {
            cout<< prel[r]-prel[l-1]<< "\n";
        } else {
            cout<< pre2[r] - pre2[l-1]<< "\n";
        }
    }
}