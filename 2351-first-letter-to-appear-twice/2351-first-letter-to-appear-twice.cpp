class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char> a(28);
        
        for(auto it: s){
            a[it-'a']++;
            if(a[it-'a']>1) return it;
        }
        return 'a';
    }
};