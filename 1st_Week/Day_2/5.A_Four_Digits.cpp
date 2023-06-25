#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>> N;

    string N_str = to_string(N);
    N_str = setfill('0') + setw(4) + N_str;

    cout<< N_str<< "\n";

    return 0;
}