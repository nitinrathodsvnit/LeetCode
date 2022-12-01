class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int ans=0, t=0;
        for(int i=0; i<s.length()/2; i++){
            if(st.find(s[i])!=st.end()){   ans++;};
            if(st.find(s[s.length()-i-1])!=st.end()){   t++;};
        }
        return t==ans;
    }
};