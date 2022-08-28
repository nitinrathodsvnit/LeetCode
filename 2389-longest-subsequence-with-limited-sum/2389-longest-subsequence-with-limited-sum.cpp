class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(auto it: queries){
            int tm=0, i;
            for(i=0; i<n; i++){
                tm+=nums[i];
                if(tm>=it)  break;
            }
            if(tm!=it)  i--;
            ans.push_back(i+1);
        }
        return ans;
    }
};