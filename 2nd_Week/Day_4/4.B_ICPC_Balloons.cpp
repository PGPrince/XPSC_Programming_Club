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

    int t, n, count;
    string s;
    vector<bool>solved;
    cin>> t;
    while(t--) {
        int n;
        cin>> n>> s;
        solved.assign(26, false);
        count=0;
        
        for(int i=0; i<n; i++) {
            if(solved[s[i]-'A']) {
                count++;
            }
            else {
                count+=2;
                solved[s[i]-'A']=true;
            }
        }
        cout<< count<< "\n";
    }
    
    return 0;
}