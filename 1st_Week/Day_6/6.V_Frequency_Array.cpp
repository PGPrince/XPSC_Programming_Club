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

    int size, counter;
    cin>> size>> counter;
    int arr[1000001] = {0};
    for(int i=0; i<size; i++) {
        int num;
        cin>> num;
        if(arr[num]==0) {
            arr[num]=1;
        }
        else {
            arr[num]=arr[num]+1;
        }
    }

    for(int i=1; i<=counter; i++) {
        cout<< arr[i]<< "\n";
    }

    return 0;
}