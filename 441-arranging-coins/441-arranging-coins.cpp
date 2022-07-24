class Solution {
public:
    int arrangeCoins(int n) {
        long long x=1, i=1;
        while(x<n){
            i++;
            x+=i;
        }
        // cout<<x<<" "<<n;
        if(x==n)    return i;
        return i-1;
    }
};