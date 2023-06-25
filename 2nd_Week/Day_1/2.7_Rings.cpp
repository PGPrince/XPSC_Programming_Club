#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--) {
        int a, b;
        cin>> a>> b;
        if((a*b)>9999 && (a*b)<=99999) {
            cout<< "YES"<< "\n";
        }
        else {
            cout<< "NO"<< "\n";
        }
    }

    return 0;
}