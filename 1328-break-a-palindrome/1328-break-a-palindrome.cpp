class Solution {
public:
    string breakPalindrome(string s) {
        int len = s.length();
        bool ans= false;
        if(len==1)  return "";
        for(int i=0; i<len; i++){
            if(len&1 and i==len/2)  continue;
            if(s[i]!='a'){  
                s[i]='a';
                ans=true;
                break;
            }
            
        }
        if(!ans)    s[len-1]+=1;
        return s;
    }
};