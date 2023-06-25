#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, flag=0;
    cin>> a>> b>> c;

    for(int i=0; i<=c; i++) {
        if(flag==0) {
            for(int j=0; j<=c; j++) {
                if((i*a)+(j*b)==c) {
                    cout<< "YES"<< "\n";
                    flag=1;
                    break;
                }
            }
        }
    }

    if(flag==0) {
        cout<< "NO"<< "\n";
    }

    return 0;
}