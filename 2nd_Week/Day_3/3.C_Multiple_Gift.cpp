#include <bits/stdc++.h>
using namespace std;

long long findMaxLength(long long X, long long Y) {
    long long maxLength = 1;
    long long currentNumber = X;

    while (currentNumber * 2 <= Y) {
        currentNumber *= 2;
        maxLength++;
    }

    return maxLength;
}

int main() {
    long long X, Y;
    cin >> X >> Y;

    long long maxLength = findMaxLength(X, Y);
    cout << maxLength << "\n";

    return 0;
}
