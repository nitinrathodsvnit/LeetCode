class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        int n = a.size();
        char ans='{', el = '{';
        for(int i=0; i<n; i++){
            if(target<a[i]) ans=min(a[i], ans);
            el = min(a[i], el);
        }
        return ans=='{'?el:ans;
    }
};