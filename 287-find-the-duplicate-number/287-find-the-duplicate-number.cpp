class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int ans=0, n = a.size();
        sort(a.begin(), a.end());
        for(int i=1; i<n; i++){ 
            if(a[i]==a[i-1]){    ans = a[i]; break;}
        }
        return ans;
    }
};