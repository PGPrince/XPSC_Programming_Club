#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, j;
 
    cin>> t;
 
    while (t--) {
        int num;
        cin>> num;
 
        long long fact = 1;
 
        for(j=1; j<=num; j++) {
            fact *= j;
        }
 
        cout<< fact<< endl;
    }
 
    return 0;
}