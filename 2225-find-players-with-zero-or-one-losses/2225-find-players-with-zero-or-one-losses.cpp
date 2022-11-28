class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        set<int>st;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[matches[i][1]]++;
            st.insert(matches[i][0]);st.insert(matches[i][1]);
        }
        
        int x = st.size();
        vector<int> ze; vector<int> on;
        for(auto it: st){
            if(mp[it]==1)    on.push_back(it);
            else if(mp[it]==0)    ze.push_back(it);
        }
        
//         sort(on.begin(), on.end());
//         sort(ze.begin(), ze.end());
        
        return {ze, on};
    }
};