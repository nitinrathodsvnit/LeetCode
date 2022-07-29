class Solution {
public:
    int mySqrt(int x) {
        int ans=0, i=1;
        while(x-i>=0){
            x-=i;
            i+=2;ans++;
        }
        return ans;
    }
};