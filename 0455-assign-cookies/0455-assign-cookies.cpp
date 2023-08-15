class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int gn = g.size(), sn = s.size(), i=0, j=0;
        while(i<gn and j<sn){
            if(s[j]>=g[i]) i++;

            j++;
        }
        return i;
    }
};