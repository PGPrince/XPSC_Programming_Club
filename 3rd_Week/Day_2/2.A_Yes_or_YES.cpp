#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>> n;
    for(int i=0; i<n; i++) {
        cin>> s;
        if(s=="YES" || s=="yES" || s=="YEs" || s=="YeS" || s=="yEs" || s=="yeS" || s=="Yes" || s=="yes") {
        cout<< "YES"<< "\n";
    }
    else {
        cout<< "NO"<< "\n";
    }
    
    }

    return 0;
}