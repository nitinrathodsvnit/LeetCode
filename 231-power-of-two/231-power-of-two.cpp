class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n!=0 and n!=INT_MIN? !(n&(n-1)) : 0;
    }
};