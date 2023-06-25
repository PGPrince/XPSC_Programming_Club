/*
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n=a.size();
    int i=0, j=0;
    long long s=0;
    int ans=0;
    while(j<n) {
        s+=a[j];
        if(s>k) {
            while(s>k) {
                s-=a[i];
                i++;
            }
        }
        if(s==k) {
            ans=max(ans, j-i+1);
        }
        j++;
    }

    return ans;
}
*/