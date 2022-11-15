class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, tm=0;
        for(auto it: s){
            if(it=='(') ans++;
            else if(it==')')    ans--;
            tm = max(ans, tm);
        }
        return tm;
    }
};