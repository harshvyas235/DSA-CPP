// https://leetcode.com/problems/add-strings/submissions/
class Solution {
public:
   
   void find(string& num1,int i,string& num2,int j,string& ans,int carry){
     //base case
     if(i<0 && j<0){
         if(carry!=0){
             ans.push_back(carry+'0');
         }
         
             return;
        
     }

     int s=(i>=0?num1[i]:'0')-'0';
     int s2=(j>=0?num2[j]:'0')-'0';
     int sum =s+s2+carry;
     int digit =sum%10;
     carry=sum/10;
     ans.push_back(digit +'0');
     find(num1,i-1,num2,j-1,ans,carry);

   }

    string addStrings(string num1, string num2) {
        string ans="";
        find( num1,num1.size()-1,num2,num2.size()-1,ans,0);
        reverse(ans.begin(), ans.end());
        return ans;

        
    }
};