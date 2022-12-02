class Solution {
public:
    bool closeStrings(string wo, string wt) {
        int n1 = wo.length(), n2 = wt.length();
        if(n1!=n2)  return false;
        vector<int> o(26, 0), t(26, 0);
        set<char> s1, s2;
        for(int i=0; i<n1; i++){    
            o[wo[i]-'a']++; t[wt[i]-'a']++;
            s1.insert(wo[i]);s2.insert(wt[i]);
        }
        sort(o.begin(), o.end());
        sort(t.begin(), t.end());
        return o==t and s1==s2;
            
    }
};