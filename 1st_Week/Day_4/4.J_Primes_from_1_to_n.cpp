#include <bits/stdc++.h>
using namespace std;

int prime(int number) {
    int div = number/2;
    for(int i=2; i<=div; i++) {
        if(number%i == 0) {
            return -1;
        }
    }

    return number;
}

int main()
{
    int n;      cin>> n;

    for(int i=2; i<=n; i++) {
        int res = prime(i);
        if(res != -1) {
            cout<< res<< " ";
        }
    }

    return 0;
}