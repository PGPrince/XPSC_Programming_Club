#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();
    
    int counter;
    cin>> counter;
    for(int i=0; i<counter; i++) {
        for(int j=0; j<counter; j++) {
            if(i==j && j!=counter/2 && j!=counter/2) {
                cout<< "\\";
            }
            else if(i==counter/2 && j==counter/2) {
                cout<< "X";
            }
            else if(j!=counter/2 && i==((counter-1)-j)) {
                cout<< "/";
            }
            else {
                cout<< "*";
            }
        }
        cout<< "\n";
    }

    return 0;
}