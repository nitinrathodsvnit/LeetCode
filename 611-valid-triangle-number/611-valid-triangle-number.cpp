class Solution {
public:
// If the sum of any two side lengths is greater than the third in every combination
    int triangleNumber(vector<int>& a) {
        sort(a.begin(), a.end());
        int ans=0, n = a.size();
        for(int i=2; i<n; i++){
            int left = 0, right = i-1;
            while(left<right){
                if(a[left] + a[right]>a[i]){
                    ans+=(right-left);
                    right--;
                }else left++;  
            }
        }
        // cout<<endl;
        return ans;
    }
};