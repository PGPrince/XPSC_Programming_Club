#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long t;
    cin>> t;
    while(t--) {
        long long n;
        string s;
        cin>> n>> s;
        long long sum=0;
        vector<long long> current(n, 0), change(n, 0);
        for(long long i=0; i<n; i++) {
            if(s[i]=='L') {
                current[i]=max(0LL, i);
            } else {
                current[i]=max(0LL, n-i-1);
            }
            change[i]=n-1-current[i];
            change[i]=change[i]-current[i];
            sum+=current[i];
        }
        sort(change.begin(), change.end(), greater<long long>());
        for(long long k=1; k<=n; k++) {
            if(change[k-1]>0) {
                sum+=change[k-1];
            }
            cout<< sum<< " ";
        }
        cout<< "\n";
    }

    return 0;
}