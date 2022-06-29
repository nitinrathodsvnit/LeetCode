class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=31; i>=0; i--){
            uint32_t tm = (1<<i);
            if(n&tm){
                ans+=((1<<(31-i)));
            }
        }
        return ans;
    }
};