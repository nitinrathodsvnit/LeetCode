class Solution {
public:
    int bagOfTokensScore(vector<int>& a, int p) {
        int ans=0;
        sort(a.begin(), a.end());
        int i=0, j=a.size()-1, tm=0;
        while(j>=i){
            if(p>=a[i]){  
                p-=a[i];
                ans++;i++;
            }
            else if(ans>0){
                p+=a[j];
                j--;ans--;
            }
            else    break;
            // cout<<ans<<" "<<i<<" "<<j<<"  ";
            tm = max(tm, ans);
        }
        return tm;
    }
};