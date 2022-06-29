class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size(), ans = 0;
        for(int i=0; i<len; i++){
            ans^=nums[i];
        }
        return ans;
    }
};