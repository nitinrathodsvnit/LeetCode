class Solution {
public:
    string makeGood(string s) {
        bool f = true;
        while(f){
            int x = 'a' - 'A';
            f = false;
            int li=(s.length()-2);
            for(int i=0; i<=li; i++){
                if(abs(x)==abs(s[i] - s[i+1])){
                    f=true;
                    s.erase(i, 2);
                }
            }
        }
        return s;
    }
};