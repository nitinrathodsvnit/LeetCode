class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        // If sorted 
        auto it = upper_bound(a.begin(), a.end(), target);
        return it==a.end()?a[0]:*it;
        // If not sorted 
        // int n = a.size();
        // char ans='{', el = '{';
        // for(int i=0; i<n; i++){
        //     if(target<a[i]) ans=min(a[i], ans);
        //     el = min(a[i], el);
        // }
        // return ans=='{'?el:ans;
    }
};