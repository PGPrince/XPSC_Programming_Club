#include <bits/stdc++.h>
using namespace std;

void fast() 
{
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();

    string value;
    int flag=0;
    while(cin>>value) {
        reverse(value.begin(), value.end());
        if(flag) {
            cout<< " ";
        }
        flag=1;
        cout<< value;
    }
    

    return 0;
}