// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        vector<int> v;
        int x = N;
        // count 0's bits
        while(x)
        {
            int b = x&1;
            if(!b)
            {
                b=1;
            }
            v.push_back(b);// storing 1 bits;
            x = x>>1;
        }
        
        // convert to Decimal
        
        int r=0, p=0;
        
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==1)
            r+=pow(2,p);
            p++;
            
        }
        
        return {abs(r-N),r};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends