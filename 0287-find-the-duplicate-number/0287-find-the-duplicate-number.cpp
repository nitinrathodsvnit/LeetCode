class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow = a[0], fast = a[0];
        do{
            slow = a[slow];
            fast = a[a[fast]];
        }while(slow!=fast);
        slow = a[0];
        while(slow!=fast){
            fast = a[fast];
            slow = a[slow];
        }
        return slow;
    }
    // int findDuplicate(vector<int>& a) {
    //     int ans=0, n = a.size();
    //     sort(a.begin(), a.end());
    //     for(int i=1; i<n; i++){ 
    //         if(a[i]==a[i-1]){    ans = a[i]; break;}
    //     }
    //     return ans;
    // }
};