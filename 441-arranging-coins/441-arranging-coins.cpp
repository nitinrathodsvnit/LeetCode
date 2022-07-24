class Solution {
public:
    int arrangeCoins(int n) {
        return floor(-0.5+sqrt((double)2*n+0.25));
        // long long x=1, i=1;
        // while(x<n){
        //     i++;
        //     x+=i;
        // }
        // // cout<<x<<" "<<n;
        // if(x==n)    return i;
        // return i-1;
    }
};