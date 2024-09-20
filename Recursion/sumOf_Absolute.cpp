// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>nums,int i){
        
//         int sum=0;
//         int j=0;
        
//             while(j<nums.size()){
//                 if(j==i){
//                     j++;
//                     continue;
//                 }
//                 else{
//                     sum+=abs(nums[i]-nums[j]);
                    
//                     j++;
                   
//                 }
           
              
//         }
//         return sum;
//     }

// int main(){
// vector<int>nums={2,3,5};
// vector<int>ans;
// int _1n;

//         for(int i=0;i<nums.size();i++){
            
//             ans.push_back(solve(nums,i));
//         }
// for (int i = 0; i < nums.size(); i++)
// {
//   cout<<ans[i]<<endl;
// }


        
// return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

//        void find(vector<int>output,vector<int>&ans,vector<int>arr,int index,int n){
//         if(index==n){
//           sort(output.begin(),output.end());
//         int val = output[output.size()-1];
//           ans.push_back(val);
//           return;
//         }
//         output.push_back(arr[index]);
//          find(output,ans,arr,index+1,n);
//         output.pop_back();
//         find(output,ans,arr,index+1,n);


//        }

//         int main() {

//           int n;
//           cin>>n;
//           vector<int>arr;
//           for(int i=0;i<n;i++){
//             int val ;
//             cin>>val;
//             arr.push_back(val);
//           }

//           if(n==1){
//             cout<<arr[0];
//             return 0;
//           }

//           vector<int>ans;

//           vector<int>output;
//           int index=0;


//           find(output,ans,arr,index,n);
//           cout<<ans.size();

//           int sum=0;

//           for(int j=0;j<ans.size();j++){
//                cout<<ans[j]<<endl;
//                sum+=ans[j];
//           }

//           cout<<sum;
//           return 0;

          

          
//         }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  void find(vector<int>output,vector<int>&ans,vector<int>arr,int index,int n){
        if(index==n){
            if(output.empty()==false){
                 sort(output.begin(),output.end());
        int val = output[output.size()-1];
          ans.push_back(val);
            }
         
          return;
        }
        output.push_back(arr[index]);
         find(output,ans,arr,index+1,n);
        output.pop_back();
        find(output,ans,arr,index+1,n);


       }

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    if (n == 1) {
        cout << arr[0];
        return 0;
    }

    vector<int> ans;
    vector<int> output;
    int index = 0;

    find(output, ans, arr, index, n);

    cout << "Size of ans: " << ans.size() << endl;

    int sum = 0;
    for (int j = 0; j < ans.size(); j++) {
        cout << ans[j] << endl;
        sum += ans[j];
    }

    cout << "Sum of elements in ans: " << sum << endl;

    return 0;
}
