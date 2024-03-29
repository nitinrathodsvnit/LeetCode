class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        
        long long lla = (long long)a;
        long long llb = (long long)b;
        long long llc = (long long)c;
        auto f = [](long long k, long long a, long long b, long long c) {
            return k/a + k/b + k/c - k/lcm(a, b) - k/lcm(b, c) - k/lcm(a, c) + k/lcm(a, lcm(b, c));
        };
        
        int lo = 1, hi = 2 * 1e9;
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            
            int num = f(mid, lla, llb, llc);
            
            if (num < n) {
                lo = mid + 1;
            }
            else if (num > n) {
                hi = mid - 1;
            }
            else {
                hi = mid;
            }
        }
        
        return lo;
    }
};