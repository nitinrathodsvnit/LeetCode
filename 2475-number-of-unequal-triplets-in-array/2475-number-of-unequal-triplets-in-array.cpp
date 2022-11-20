class Solution {
public:
    int unequalTriplets(vector<int>& a) {
        int n = a.size(), ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]!=a[j]){
                    for(int k=j+1; k<n; k++){
                        if(a[k]!=a[i] and a[k]!=a[j])   ans++;
                    }
                }
            }
        }
        return ans;
    }
};