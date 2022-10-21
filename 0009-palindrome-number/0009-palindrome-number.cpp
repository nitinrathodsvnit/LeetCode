class Solution {
public:
    string numbertostring(int x){
        string ans="";
        while(x){
            int tm=x%10;
            x/=10;
            ans+=(tm+'0');
        }
        return ans;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s = numbertostring(x);
        for(int i=0; i<s.length()/2; i++)   if(s[i]!=s[s.length()-1-i])return false;
        return true;
    }
};