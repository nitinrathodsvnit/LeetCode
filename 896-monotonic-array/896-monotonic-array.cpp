class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int n = a.size();
        bool f=true, s=true;
            for(int i=1; i<n; i++){
                if(a[i-1]<a[i]){ f= false; break;}
            }
            for(int i=1; i<n; i++){
                if(a[i-1]>a[i]) {s= false;break;}
            }
        return (f or s);
    }
};