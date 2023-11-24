
// https://leetcode.com/problems/group-anagrams/submissions/





















// class Solution {
// public:
   
//     bool check(string s, string t) {
//         int freq[256]={0};

//         for(int i=0;i<s.length();i++){
//             freq[s[i]]++;
//         }

//         for(int i=0;i<t.length();i++){
//             freq[t[i]]--;
//         }

//         for(int i =0;i<256;i++){
//             if(freq[i]!=0){
//                 return false;
//             }
           
//         }
//         return true;

//     }

//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//       int i =0;
//       vector<vector<string>> a;
//       while(i<strs.size()){
//           vector<string> ans;
//           ans.push_back(strs[i]);
//           int j=i+1;
//           while(j<strs.size())
//           {
//               if(check(strs[i],strs[j])){
//                   ans.push_back(strs[j]);

//                   strs.erase(strs.begin()+j);
                  
//               }
//               else{
//                   j++;
//               }
//           }
//           a.push_back(ans);
//           i++;
          
//       }
//       return a;
        
//     }
// };

// class Solution {
// public:
   
  

//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//       map<string,vector<string>> m;
//       for(auto ch : strs){
//           string s= ch;
//            sort(s.begin(),s.end());
//           m[s].push_back(ch);
//       }
//         vector<vector<string>> ans;
//         for(auto it=m.begin(); it!=m.end();it++){
//             ans.push_back(it->second);
//         }
//         return ans;
//     }
// };
