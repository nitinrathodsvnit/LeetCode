class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        int pre1 = 0, pre2=1, ans=0;
        for(int i=2; i<=n; ++i){
            ans = pre1 + pre2;
            pre1 = pre2;
            pre2 = ans;
        }
        return ans;
    }
};