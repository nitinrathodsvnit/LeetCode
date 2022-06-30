class Solution {
public:
    int minMoves2(vector<int>& a) {
        sort(a.begin(), a.end());
        int n = a.size();
        int mid = n/2, ans=0;
        for(int i=0; i<n; i++){
            ans+=(abs(a[mid]-a[i]));
        }
        return ans;
    }
};