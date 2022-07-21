class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        ans.push_back(a[0]);
        
        int n = a.size(), j=0;
        
        for(int i=1; i<n; i++){
            if(a[i][0]<=ans[j][1]){
                ans[j][1] = max(a[i][1], ans[j][1]);
            }
            else{
                j++;
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};