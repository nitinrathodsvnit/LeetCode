class Solution {
public:
    int chalkReplacer(vector<int>& a, int k) {
        long long sum=0, n = a.size();
        for(int i=0; i<n; i++)  sum+=a[i];
        k = k%sum;
        long long i=0;
        while(k>=a[i]){
            k-=a[i];
            i++;
        }
        return i;
    }
};