class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans="";
        for(int i=0; i<n; i++){
            string tm="";
            while(s[i]!=' ' and i<n){
                tm+=s[i];
                i++;
            }
            reverse(tm.begin(), tm.end());
            ans+=tm;
            if(i!=n) ans+=' ';
        }
        return ans;
    }
};