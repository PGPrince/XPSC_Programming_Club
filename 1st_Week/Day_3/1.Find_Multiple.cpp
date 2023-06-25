#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    cin>> a>> b>> c;
    long long x=(b/c)*c;
    if(a<=x) cout<< x<< "\n";
    else cout<< "-1"<< "\n";
}