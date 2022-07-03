class Solution {
public:
    int wiggleMaxLength(vector<int>& a) {
        int n = a.size(), na=1, m=1;
        for(int i=1; i<n; i++){
            if(a[i]>a[i-1]) m = na+1;
            else if(a[i]<a[i-1]) na = m+1;
        }
        return max(na, m);
    }
};