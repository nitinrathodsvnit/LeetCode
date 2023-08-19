class Solution {
public:

    void f(int idx, vector<int> &ds, vector<vector<int>> &ans, int target, vector<int> arr){
        if(idx>=arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(target>=arr[idx]){
            ds.push_back(arr[idx]);
            f(idx, ds, ans, target - arr[idx], arr);
            ds.pop_back();
        }
        f(idx+1, ds, ans, target, arr);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        f(0, ds, ans, target, arr);
        return ans;
    }
};