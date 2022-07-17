class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==0){
                    for(int x=0; x<n; x++){
                        if(a[x][j]!=0)  a[x][j]=-69;
                    }
                    for(int x=0; x<m; x++){
                        if(a[i][x]!=0)  a[i][x]=-69;
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==-69){
                    a[i][j]=0;
                }
            }
        }
    }
};