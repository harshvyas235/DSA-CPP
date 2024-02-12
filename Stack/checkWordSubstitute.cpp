https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/description/

class Solution {
public:
    bool isValid(string s) {
        int i = s.length()-1;

        if(s[0]!='a'){
            return false;
        }
        if(s[i]!='c'){
            return false;
        }
        stack<char> st;
        while(i>=0){
            if(st.empty()){
                st.push(s[i]);
                i--;
            }
            else if(st.top()=='c'&&s[i]=='b'){
                st.pop();
                st.push(s[i]);
                i--;
            }
            else if(st.top()=='b'&&s[i]=='a'){
                st.pop();
                i--;
            }
            else{
                st.push(s[i]);
                i--;
            }
        }
        if(st.empty()==true){
            return true;
        }
        return false;
    }
};