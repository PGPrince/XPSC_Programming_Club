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

    int myRes1, myRes2;
    string num1;
    cin>> num1;

    int size = num1.size();

    char num2[size];
    int counter=0;

    for(int i=size-1; i>=0; i--) {
        num2[counter]=num1[i];
        counter++;
    }
    
    stringstream s1;
    s1>> num1;
    s1<< myRes1;
    stringstream s2;
    s2>> num2;
    s2<< myRes2;

    if(myRes1==myRes2) {
        cout<< "YES"<< "\n";
    }
    else {
        cout<< "NO"<< "\n";
    }

    return 0;
}