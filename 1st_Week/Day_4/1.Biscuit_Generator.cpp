#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();

    long long a, b, t;        cin>> a>> b>> t;

    int generated_times = t/a;
    int ans = generated_times*b;
    cout<< ans<< "\n";

    return 0;
}