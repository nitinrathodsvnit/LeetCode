class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> ans;
        int tm=0;
        for(auto it: nums){
            st.insert(it);
            if(st.size()==tm)  ans.push_back(it); 
            tm = st.size();
        }
        for(int i=1; i<=nums.size(); i++){
            if(st.find(i)==st.end()){    ans.push_back(i); break;}
        }
        return ans;
    }
};