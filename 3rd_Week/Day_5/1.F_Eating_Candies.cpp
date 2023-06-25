#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            ll ar[n+3];
            for(int i=1;i<=n;i++)
            {
                cin>>ar[i];
            }
            ll sum1=0,sum2=0;
            int i=1,j=n;
            int cnt1=0,cnt2=0;
            int ans=0;
            while(i<=j)
            {
                if(sum1<=sum2)
                {
                    sum1+=ar[i];
                    i++;
                    cnt1++;
                }
                else{
                    sum2+=ar[j];
                    j--;
                    cnt2++;
                }
                if(sum1==sum2)ans=cnt1+cnt2;
            }
            cout<<ans<<endl;
        }
    }
     

