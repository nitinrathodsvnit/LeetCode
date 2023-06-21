//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool f(int i, int sum, vector<int> v, vector<vector<int>> &dp){
        if(sum==0)  return 1;
        if(i==0)    return v[0]==sum;
        if(dp[i][sum]!=-1)   return dp[i][sum];
        bool nottake = f(i-1, sum, v, dp);
        bool take = 0;
        if(v[i]<=sum)   take = f(i-1, sum-v[i], v, dp);
        return dp[i][sum] = (take or nottake);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum+1, -1)); 
        return f(n-1, sum, arr, dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends