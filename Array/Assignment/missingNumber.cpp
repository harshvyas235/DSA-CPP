class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = nums.size();
        int sum1=0;
        for(int i=0;i<=num;i++){
            sum1= sum1+i;
            cout<<sum1;

        }
        int sum2=0;
        for(int i=0;i<nums.size();i++){
          sum2= sum2+nums[i];
        }
        int ans = sum1-sum2;

        return ans;
        
    }
};