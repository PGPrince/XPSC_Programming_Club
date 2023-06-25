    #include <iostream>
    using namespace std;
     
    int main()
    {
        int X, i, count=0;
     
        cin>> X;
     
        for(i=2; i<X; i++) {
            if(X%i==0) {
                count++;
                break;
            }
        }
     
        if(count==0) cout<< "YES\n"<< endl;
        else cout<< "NO\n"<< endl;
     
        return 0;
    }