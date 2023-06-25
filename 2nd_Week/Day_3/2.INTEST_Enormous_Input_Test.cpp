#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    
    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        int ti;
        cin >> ti;

        if (ti % k == 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}
