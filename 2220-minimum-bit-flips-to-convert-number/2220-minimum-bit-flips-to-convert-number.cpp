class Solution {
public:
    int minBitFlips(int s, int g) {
        int ans=0;
        for(int i=0; i<32; i++){
            int t = 1<<i;
            if((t&s)!=(t&g))    ans++;
        }
        return ans;
    }
};