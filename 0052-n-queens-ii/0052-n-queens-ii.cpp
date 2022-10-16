class Solution {
	// vector<vector<string>> ans;
	int count=0;
public:
	bool issafe(int r,int c,vector<string>&v,int n){
		//column check
		for(int i=0;i<=r;i++){
			if(v[i][c]=='Q') return false;
		}
		//diagonal check left side
		int row=r,col=c;
		while(row>=0 && col>=0){
			if(v[row][col]=='Q') return false;
			row--,col--;
		}
		//diagonal check right side
		row=r,col=c;
		while(row>=0 && col<n){
			if(v[row][col]=='Q') return false;
			row--,col++;
		}
		return true;
	}
	void helper(int r,vector<string> &v,int n){
		 if(r==n){
			 count++;
			 return ;
		 }
		for(int i=0;i<n;i++){ //fixing row and checking for column(each row can have only one queen)
			if(issafe(r,i,v,n)){
				v[r][i]='Q';
				helper(r+1,v,n);
				v[r][i]='.';
			}
		}
	}
	int totalNQueens(int n) {
		vector<string> v;
		string s(n,'.');
		for(int i=0;i<n;i++) v.push_back(s);
		helper(0,v,n);
		return count;
	}
};