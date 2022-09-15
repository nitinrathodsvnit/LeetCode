class Solution {
public:
        int mod=1e9+7;
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        vector <int> diff(n);
        for(int i=0; i<n; i++)                                       
            diff[i]=abs(nums1[i]-nums2[i]);                 
        sort(nums1.begin(), nums1.end());        
        
        int sub=0;
        for(int i=0; i<n; i++)
        {
            auto it=lower_bound(nums1.begin(), nums1.end(), nums2[i]);     
            int index=it-nums1.begin();
            int a, b, t;
            if(index==n)                    
            {
                b=nums1[index-1];
                t=abs(b-nums2[i]);
            }
            else if(index==0)          
            {
                a=nums1[index];
                t=abs(a-nums2[i]);
            }
            else
            {
                a=nums1[index];
                b=nums1[index-1];
                t=min(abs(a-nums2[i]), abs(b-nums2[i])); 
            }
            //cout<<t<<endl;
            sub=max(sub, diff[i]-t);       
        }
        cout<<sub<<endl;
        long long int ans=-sub; 
        for(int i=0; i<n; i++)
        {
            ans=(ans+diff[i]);
        }
        cout<<ans<<endl;
        ans=ans%mod;
        
        return ans;
    }
};