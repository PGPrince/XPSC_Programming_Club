#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>> n>> s;
    int count=0;
    for(int i=0; i<=n-3; i++) {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') {
            count++;
        }
    }

    cout<< count<< "\n";

    return 0;
}