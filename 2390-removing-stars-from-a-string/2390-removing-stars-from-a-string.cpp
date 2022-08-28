class Solution {
public:
    string removeStars(string s) {
        int n = s.length(), st=0;
        string ans="";
        for(int i=n-1; i>=0; i--){
            if(s[i]=='*'){
                st++;continue;
            }
            else if(st){
                st--;
                continue;
            }
            ans+=s[i];
        }
        // cout<<ans;
        string tm="";
        for(int i=ans.length()-1; i>=0; i--)  tm+=ans[i];
        return tm;
    }
};