#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int N = s.size();
    string ans;
    for(int i=0; i<N; i+=2) {
        ans += s[i];
    }

    cout<< ans<< "\n";


    return 0;
}