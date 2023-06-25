    #include <bits/stdc++.h>
    using namespace std;
     
    void fast() {
        cin.tie(0);
        cout.tie(0);
    }
     
    int main() {
        fast();
     
        int n, m;       cin>> n>> m;
     
        bool v=false;
     
        for(int i=n; i<=m; i++) {
            int a=i;
            bool flag=false;
            while(a>0) {
                int x=a%10;
                if(x!=7 && x!=4) {
                    flag=true;
                }
                a/=10;
            }
            if(!flag) {
                cout<< i<< " ";
                v=true;
            }
        }
     
        if(!v) {
            cout<< "-1"<< "\n";
        }
     
        return 0;
    }