#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

long long calc(long long A)
{
    long long counter=(A+1)/2;
    long long ans=counter%2;
    if(A%2==0) {
        ans ^= A;
    }

    return ans;
}

int main()
{
    long long A, B;
    cin >> A >> B;
    long long ans = calc(B) ^ calc(A - 1);
    cout << ans << "\n";
    cin >> ans;

    return 0;
}
