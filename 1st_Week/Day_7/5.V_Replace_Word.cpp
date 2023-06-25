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
    cin>> value;
    int size = value.size();

    for(int i=0; i<size; i++) {
        if(value[i]=='E' && value[i+1]=='G' && value[i+2]=='Y' && value[i+3]=='P' && value[i+4]=='T') {
            i+=4;
            cout<< " ";
        }
        else {
            cout<< value[i];
        }
    }
    

    return 0;
}