class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0, j=height.size()-1;
        while(i<j){
            int h = min(height[i], height[j]);
            ans = max(ans, h*(j-i));
            while(height[i]<=h and i<j)  i++;
            while(height[j]<=h and i<j)  j--;
        }
        return ans;
    }
};