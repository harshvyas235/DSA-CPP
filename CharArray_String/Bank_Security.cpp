#include<iostream>
#include<vector>
#include<string>
using namespace std;

 int numberOfBeams(vector<string>& bank) {
      vector<int> arr;
      for(int i = 0; i< bank.size(); i++){
          int l =0;
          string str= bank[i];
          
          for(int j =0; j<str.length(); j++){
              if(str[j]=='1'){
                   l++;
              }
             
          }
          
          if(l!=0){
              arr.push_back(l);
          }
      }
      int ans =arr[0]*arr[1];

    
             
      for(int i =2; i<arr.size();i++){
        
        ans =ans+(arr[i-1]*arr[i]);

      }
     return ans;

        
    }
int main(){
   
vector<string> timep={"011001","000110","001000"};

cout<<numberOfBeams(timep);

return 0;
}