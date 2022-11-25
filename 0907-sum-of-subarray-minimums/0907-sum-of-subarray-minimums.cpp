
/*
First we are creating two arras of next minimums and previous minimums and the if we see in this
3 5 6 4 7 8 2
for 4 -> 3 [5 6 4 7 8] 2 the covered set having all subsets wiith min element as 4 so sum will be (no. ele to left)*(no. ele to right)*4
just like that we are calculatinig for the else
*/
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int> s1, s2;
        int n=arr.size();
        vector<int> ns(n), ps(n);
        for(int i=0; i<n; i++){
            ns[i] = n - i - 1;
            ps[i] = i;
        }
        for(int i=0; i<n; i++){
            while(!s1.empty() && arr[s1.top()]>arr[i]){
                ns[s1.top()] = i - s1.top() - 1;
                s1.pop();
            }
            s1.push(i);
        }
        for(int i=n-1; i>=0; i--){
            while(!s2.empty() && arr[s2.top()]>=arr[i]){
                ps[s2.top()] = s2.top() - i - 1;
                s2.pop();
            }
            s2.push(i);
        }
        long long int ans = 0, e = 1e9+7;
        for(int i=0; i<n; i++){
            ans=(ans%e + (((((ps[i]+1)%e)*((ns[i]+1)%e))%e)*(arr[i]))%e)%e;
        }
        return (int)ans;
    }
};