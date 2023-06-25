    #include <iostream>
    using namespace std;
     
    int main()
    {
        long long int ev_count=0, odd_count=0, pos_count=0, neg_count=0, t, i, num;
     
        cin>> t;
     
        for(i=1; i<=t; i++) {
            cin>> num;
            if(num%2 == 0) {
                ev_count++;
            }
            else {
                odd_count++;
            }
     
            if(num>0) {
                pos_count++;
            }
            else if (num<0) {
                neg_count++;
            }
        }
        cout<< "Even: "<< ev_count<< endl;
        cout<< "Odd: "<< odd_count<< endl;
        cout<< "Positive: "<< pos_count<< endl;
        cout<< "Negative: "<< neg_count<< endl;
     
     
        return 0;
    }