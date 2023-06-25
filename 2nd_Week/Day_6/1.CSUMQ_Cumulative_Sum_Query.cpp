#include <bits/stdc++.h>
using namespace std;

int main()
{
     int number; 
     cin>> number;

     int arr[number+1];

     for(int i=0; i<number; i++) {
        cin>> arr[i];
     }

     int pre[number+1];
     pre[0] = arr[0];

     for(int i=1; i<number; i++) {
        pre[i] = pre[i-1] + arr[i];
     }

     int q;
     cin>> q;

     while(q--) {
        int l, r;
        cin>> l>> r;
        if(l==0) {
            cout<< pre[r]<< "\n";
        }
        else {
            cout<< pre[r]-pre[l-1]<< "\n";
        }
     }

    return 0;
}