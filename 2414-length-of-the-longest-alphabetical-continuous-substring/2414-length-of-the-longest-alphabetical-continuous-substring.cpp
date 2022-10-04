class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=1, tm=1;
        for(int i=1; i<s.length(); i++){
            if(s[i]-s[i-1]==1)  tm++;
            else tm=1;
            ans = max(tm, ans);
        }
        return ans;
    }
};