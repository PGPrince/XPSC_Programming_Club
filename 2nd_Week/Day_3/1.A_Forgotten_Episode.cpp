#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();

    long long n, r, z;
    cin>> n;
    long long a[n-1];
    for(int i=0; i<n-1; i++) {
        cin>> a[i];
    }

    sort(a, a+(n-1));

    for(int i=0; i<n; i++) {
        if(a[i]!=i+1) {
            cout<< i+1;
            return 0;
        }
    }

    cout<< n<< "\n";

    return 0;
}