class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return n!=0 and n!=INT_MIN? !(n&(n-1)) : 0;
        if(n==0)    return 0;
        return ceil(log2(n))==floor(log2(n));
    }
};