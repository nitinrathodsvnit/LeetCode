class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        unordered_map<int, int> mp;
        for(auto it: a) mp[it]++;
        unordered_set<int> st;
        int prev = 0;
        for(auto it: mp){
            st.insert(it.second);
            if(st.size()==prev) return false;
            prev = st.size();
        }
        return true;
    }
};