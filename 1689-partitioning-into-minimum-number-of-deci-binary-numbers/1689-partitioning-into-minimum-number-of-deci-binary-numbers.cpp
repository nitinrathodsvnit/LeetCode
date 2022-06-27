class Solution {
public:
    int minPartitions(string s) {
        int n = s.length(), ans=0;
        for(int i=0; i<n; i++){
            int ch = s[i] - '0';
            ans = max(ans, ch);
        }
        return ans;
    }
};