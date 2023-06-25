#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0){
        if(y%2==1){
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s){
    return stoi(s);
}
string num_to_str(ll num){
    return to_string(num);
}

const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;

ll solve(){
    vector<vector<char>> grid(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(grid[i][j]=='#' && grid[i-1][j+1]=='#' && grid[i-1][j-1]=='#' && grid[i+1][j-1]=='#' && grid[i+1][j+1]=='#'){
                cout<<1+i<<" "<<1+j<<endl;
                return 0;
            }
        }
    }
    return 0;
}

int main(){
    speed;
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--){
        solve();
    }
}