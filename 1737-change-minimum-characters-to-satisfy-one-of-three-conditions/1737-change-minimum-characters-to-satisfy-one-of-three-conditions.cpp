class Solution {
public:
    int minCharacters(string a, string b) {
        int m = a.length();
    int n = b.length();
    vector<int> arr1(26, 0);
    vector<int> arr2(26, 0);
    for (int i = 0; i < m; i++) {
        arr1[a[i] - 'a'] += 1;
    }
    for (int i = 0; i < n; i++) {
        arr2[b[i] - 'a'] += 1;
    }
    int ans = INT_MAX;

    for (int i = 0; i < 26; i++) {

        ans = min(ans, m + n - arr1[i] - arr2[i]);
    }
    // cout<<ans<<endl;

    for (int i = 1; i < 26; i++) {
        arr1[i] += arr1[i - 1];
    }
    for (int i = 1; i < 26; i++) {
        arr2[i] += arr2[i - 1];
    }

    for (int i = 0; i < 25; i++) {

        ans = min(ans, arr1[i] + n - arr2[i]);
        ans = min(ans, m - arr1[i] + arr2[i]);
    }

    return ans;
    }
};