class Solution {
public:
    int divide(long long dividend, long long divisor) {
        long long int a = dividend, b=divisor;
        long long ans = a/b;
        if(ans>2147483647){
            return 2147483647;
        }
        else if(ans<-2147483648){
            return -2147483648;
        }
        return dividend/divisor;
    }
};