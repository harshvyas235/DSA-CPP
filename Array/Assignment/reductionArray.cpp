#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int findLargest(vector<int> nums,int j){
        
       
        int largest;
        int i=0;
        while(nums[i]<nums[j]){
            i++;

        }
      

     }

bool check( vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=arr[i+1] && i+1<arr.size()){
            return false;
        }
    }
    return true;
}
int main(){
vector<int>arr={5,2,4,3};
sort(arr.begin(), arr.end());

int size= arr.size()-1;
while(check(arr)!=true){
    
    int largest =findLargest(arr,size) ;
    // cout<<arr[largest]<<" ";
    int second = findLargest(arr,largest-1);
    // cout<<arr[second]<<endl;

    size=second;

    arr[largest]=arr[second];
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}




return 0;
}