class Solution {
public:
    bool isPowerOfFour(int n) {
        return n==INT_MIN ? 0: (n&(n-1))==0 and (n-1)%3==0;
    }
};