class Solution {
public:
    bool isValid(string s) {
     stack<char> st;
        for( int i=0; i<s.length(); i++){
            if(!st.empty() and s[i]==')'){
                if(st.top()=='(') st.pop();
                else return false;
            }
            else if(!st.empty() and s[i]==']'){
                if(st.top()=='[') st.pop();
                else return false;
            }
            else if(!st.empty() and s[i]=='}'){
                if(st.top()=='{') st.pop();
                else return false;
            }
            else st.push(s[i]);
        }
        return st.empty();
    }
};