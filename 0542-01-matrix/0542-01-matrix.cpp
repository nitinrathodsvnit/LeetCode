class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> fin(m,vector<int>(n,-1));
        queue<pair<int,int>> q;

            
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    fin[i][j]=0;
                }
            }
        }
        
        int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
            
            while(!q.empty()){
                
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                
                for(auto dir:dirs){
                    int sr=r+dir[0];
                    int sc=c+dir[1];
                    if(sr>=0 && sc>=0 && sr<m && sc<n && fin[sr][sc]==-1){
                        fin[sr][sc]=fin[r][c]+1;
                        q.push({sr,sc});
                    }
                }
                
            }
        
        return fin;
    }
};