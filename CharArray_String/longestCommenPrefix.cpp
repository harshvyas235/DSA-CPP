
// https://leetcode.com/problems/longest-common-prefix/description/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans;
        while(true)
        {
            char current=0;
            for(auto str : strs)
            {
                if(i>=str.length()){
                    current=0;
                    break;
                }

             if(current==0){
                 current=str[i];
             }
             else if(str[i]!=current){
                 current =0;
                 break;
             }

            }
             if(current==0)
             {
             break;
             }
             ans.push_back(current);
        
         i++;
        }
        return ans;
        

        
    }
};