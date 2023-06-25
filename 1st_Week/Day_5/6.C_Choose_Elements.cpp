#include <bits/stdc++.h>
using namespace std;

void fast() {
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();

    int size, num;
    cin>> size>> num;
    long long arr[size];
    for(int i=0; i<size; i++) {
        cin>> arr[i];
    }

    sort(arr, arr+size);
    reverse(arr, arr+size);

    long long sum=0;

    for(int i=0; i<num; i++) {
        if(arr[i]<0) {
            break;
        }
        sum+=arr[i];
    }

    cout<< sum<< "\n";

    return 0;
}