class Solution {
public:
    int search(vector<int>& a, int target) {
        auto it = find(a.begin(), a.end(), target);
        if(it==a.end()) return -1;
        return it-a.begin();
    }
};