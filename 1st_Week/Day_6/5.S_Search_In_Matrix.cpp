#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;       cin>> row>> col;

    int arr[row][col];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>> arr[i][j];
        }
    }

    int search;   cin>> search;
    int flag=0;

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j]==search) {
                flag=1;
                break;
            }
        }
    }

    if(flag==1) {
        cout<< "will not take number"<< "\n";
    }
    else {
        cout<< "will take number"<< "\n";
    }



    return 0;
}