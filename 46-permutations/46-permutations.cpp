class Solution {
    void allprm(int i, vector<vector<int>> &ans, vector<int> &a){
        if(i>=a.size()){
            ans.push_back(a);
            return;
        }
        for(int j=i; j<a.size(); j++){
            swap(a[i], a[j]);
            allprm(i+1, ans, a);
            swap(a[i], a[j]);
        }
        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0, n = nums.size();
        allprm(0, ans, nums);
        return ans;
    }
    
};