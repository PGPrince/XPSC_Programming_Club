#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);#include <bits/stdc++.h>
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
void rotateMatrix(vector<vector<int>>&v, int n){
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int ptr = v[i][j];
            v[i][j] = v[n - 1 - j][i];
            v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
            v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
            v[j][n - 1 - i] = ptr; 
        }
    }
}
 
 
ll solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<vector<int>>v(n,vector<int>(n,0)),v1(n,vector<int>(n,0)),v2(n,vector<int>(n,0)),v3(n,vector<int>(n,0));
 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            v[i][j]=ch-'0';
        }
    }
    v1=v;
    rotateMatrix(v1,n);
    v2=v1;
    rotateMatrix(v2,n);
    v3=v2;
    rotateMatrix(v3,n);
 
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n/2;j++){
            int one=0,zero=0;
            if(v[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v1[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v2[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v3[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            ans+=min(one,zero);
        }
    }
    cout<<ans<<endl;
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
