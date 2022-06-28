class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        auto lb = lower_bound(a.begin(), a.end(), target);
        int i = lb - a.begin();
        return i;
    }
};