#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, result=0, flag =1, minn;       cin>> t;
    while(t--) {
        int size; cin>> size;
        int arr[size];
        for(int i=0; i<size; i++) {
            cin>> arr[i];
        }
        for(int j=1; j<=size; j++) {
            for(int x=j+1; x<=size; x++) {
                result=(arr[j-1]+arr[x-1])+(x-j);
                if(flag==0 && minn>result) {
                        minn=result;
                }

                if(flag) {
                        minn=result;
                        flag=0;
                }

                result=0;
            }
        }
        flag=1;
        cout<< minn<< "\n";
    }
    
    
    return 0;
}