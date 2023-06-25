#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int sum=0;
        int ar[n+4];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum==s)cout<<0<<endl;
        else if(sum<s)cout<<-1<<endl;
        else{
            int cnt=0;
            int ans=0;
            int k;
            for(int i=0;i<n;i++)
            {
                ans+=ar[i];
                cnt++;
                if(ans==s)
                {
                    k=i+1;
                    break;
                }
            }
            int mx=cnt;
            int ind=0;
            for(int i=k;i<n;i++)
            {
                int j=i;
                while(j<n)
                {
                    if(ar[j]==1)
                    {
                        break;
                    }
                    cnt++;
                    mx=max(mx,cnt);
                    j++;
                }
                i=j;
                ans++;
                while(ind<n)
                {
                    if(ar[ind]==1)
                    {
                        //cnt--;
                        ind++;
                        break;
                    }
                    cnt--;
                    ind++;
                    mx=max(mx,cnt);
                }
            }
            cout<<n-mx<<endl;
        }
    }
}
 