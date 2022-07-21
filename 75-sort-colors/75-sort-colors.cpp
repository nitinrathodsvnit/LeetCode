class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int low =0 , high = n-1, mid = 0;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[low++], a[mid++]);
            }
            else if(a[mid]==1) mid++;
            else if(a[mid]==2){
                swap(a[mid], a[high--]);
            }
        }
    }
};