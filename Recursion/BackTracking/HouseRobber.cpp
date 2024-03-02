class Solution {
public:
      int solve(vector<int>& nums ,int size,int i){
          if(i>=size){
              return 0;

          }
          int ans = nums[i]+solve(nums,size,i+2);
          int ans2= solve(nums,size,i+1);
          int finalans=max(ans,ans2);
          return finalans;
      }
    int rob(vector<int>& nums) {
        int size=nums.size();
        int ans= solve(nums,size,0);
        

        return ans;
        
    }
};