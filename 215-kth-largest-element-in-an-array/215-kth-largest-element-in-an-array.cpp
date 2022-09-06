class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int it: nums)   p.push(it);
        while(k>1){
            p.pop();k--;
        }
        return p.top();
    }
};