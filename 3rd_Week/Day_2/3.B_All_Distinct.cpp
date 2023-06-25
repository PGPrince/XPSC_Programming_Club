#include <bits/stdc++.h>
using namespace std;
#define int long long 

const int N=2e5+5;
const int mod=1e9+7;

int a[N];
int b[N];



void solve(){ 
   int n;
   cin>>n;
   map<int,int>mp;
   int x;
   for(int i=0;i<n;i++)
   {
        cin>>x;
        mp[x]++;
   }
    int ans=mp.size();
    if((n-ans)%2)
        ans--;
    cout<<ans<<endl;
    

}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
}