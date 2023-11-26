#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>nums,int i){
        
        int sum=0;
        int j=0;
        
            while(j<nums.size()){
                if(j==i){
                    j++;
                    continue;
                }
                else{
                    sum+=abs(nums[i]-nums[j]);
                    
                    j++;
                   
                }
           
              
        }
        return sum;
    }

int main(){
vector<int>nums={2,3,5};
vector<int>ans;

        for(int i=0;i<nums.size();i++){
            
            ans.push_back(solve(nums,i));
        }
for (int i = 0; i < nums.size(); i++)
{
  cout<<ans[i]<<endl;
}


        
return 0;
}