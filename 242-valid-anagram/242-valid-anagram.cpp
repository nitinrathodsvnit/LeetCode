class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0}, n = s.length(), m=t.length();
        for(int i=0; i<n; i++)  a[s[i]-'a']++;
        for(int i=0; i<m; i++){
            a[t[i]-'a']--;
            if(a[t[i]-'a']<0)   return false;
        }
        for(int i=0; i<26; i++){
            if(a[i]!=0) return false;
        }
        return true;
    }
};