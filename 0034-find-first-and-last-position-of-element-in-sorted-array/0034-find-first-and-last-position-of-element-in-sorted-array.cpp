class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int x = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        int y = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(x==y)    return {-1,-1};
        return {y,x-1};
    }
};