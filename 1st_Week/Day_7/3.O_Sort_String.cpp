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

    int arr[26]={0};
    int size;
    cin>> size;
    for(int i=0; i<size; i++) {
        char c;
        cin>> c;
        arr[(int)c - 97]++;
    }

    for(int i=0; i<=25; i++) {
        while(arr[i]!=0) {
            cout<< (char)(i+97);
            arr[i]--;
        }
    }

    cout<< "\n";

    return 0;
}