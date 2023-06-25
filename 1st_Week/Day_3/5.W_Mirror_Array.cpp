#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, sizeArr;
    cin>> size>> sizeArr;
    while(size--) {
        int arr[sizeArr];
        for(int i=0; i<sizeArr; i++) {
            cin>> arr[i];
        }

        for(int i=sizeArr-1; i>=0; i--) {
            cout<< arr[i]<< " ";
        }

        cout<< "\n";
    }

    return 0;
}