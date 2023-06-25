#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();

    long long t;    cin>> t;

    while(t--) {
        long long num1, num2;       cin>> num1>> num2;
        long long maxx, minn;

        maxx = max(num1, num2);
        minn = min(num1, num2);

        minn--;

        long long result1= minn*(minn+1)/2;
        long long result2= maxx*(maxx+1)/2;
        
        cout<< result2-result1<< "\n";
    }

    return 0;
}