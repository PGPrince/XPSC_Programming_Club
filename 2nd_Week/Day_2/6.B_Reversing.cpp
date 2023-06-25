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

    int size;
    cin>> size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cin>> arr[i];
    }

    for(int i=0; i<size; i++) {
        if(arr[i]==0) {
            reverse(arr, arr+i);
        }
    }
    
    for(int i=0; i<size; i++) {
        cout<< arr[i]<< " ";
    }

    return 0;
}