class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size(), i=0, j=0, tm=0, ans=INT_MAX;
        while(i<n){
            tm+=a[i++];
            while(target<=tm){
                ans = min(ans, (i-j));
                tm-=a[j++];
            }
        }
        return ans==INT_MAX?0:(ans);
    }
};