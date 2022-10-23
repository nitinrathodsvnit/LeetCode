class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(int i=1; i<strs.size(); i++){
            string y = strs[i], ans="";
            for(int j=0; j<s.length() and j<y.length(); j++){
                if(s[j]!=y[j])  break;
                ans+=s[j];
            }
            s = ans;
        }
        return s;
    }
};