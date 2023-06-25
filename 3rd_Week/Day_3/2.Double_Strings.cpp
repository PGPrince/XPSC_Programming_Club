#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define endl "\n"
#define fi first
#define se second

const int N=1e5+5;
const int mod=1e9+7;

using ii = pair<int, int>;
using iii=pair<ii, int>;

int n;

string a[N];
bool ans[N];

void solve(){
    cin>> n;
    set<string>;

    for(int i=0; i<n; i++) {
        cin>> a[i];
        st.insert(a[i]);
        ans[i]=0;
    }

    for(int i=0; i<n; i++) {
        for(int j=1; j<a[i].size(); j++) {
            string s1="", s2="";
            for(int k=0; k<j; k++) {
                s1+=a[i][k];
            }
            if(st.find(s1)!=st.end() && st.find(s2)!=st.end()) {
                ans[i]=1;
                break;
            }
        }
    }
}
int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(mullptr);

    int T=1;
    cin>> T;
    while(T--) {
        solve();
    }
}