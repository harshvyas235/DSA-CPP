#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
   vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;

       int i=0,j=nums.size()-1 ;


       while(i!=j){
           if(nums[i]+nums[j]==target){
             int k =nums[i];
             int m = nums[j];
               for(int i=0;i<nums.size();i++){
                   if(nums[i]==k || nums[i]==m){
                    cout<<i<<endl;
                       ans.push_back(i);
                   }
               }
               return ans;
               }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                i++;
            }
       }

       return ans;

    }
int main(){
vector<int> arr={3,2,4};
vector<int>ans = twoSum(arr,6);
for(auto it:ans){
    cout<<it;
}



return 0;
}