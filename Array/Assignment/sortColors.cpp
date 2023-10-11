// class Solution {
// public:
//     void sortColors(vector<int>& arr) {
//         int m =0 ;
//         int l =0;
//         int h= arr.size()-1;
//         while(m<=h){
//             if(arr[m]==0){
//                 swap(arr[m],arr[l]);
//                 l++;
//                 m++;
//             }
//             else if(arr[m]==1){
//                 m++;

//             }
//             else{
//                 swap(arr[m],arr[h]);
//                 h--;
//             }
//         }
//     }
// };









































// #include<iostream>
// #include<vector>
// using namespace std;
// void sort(vector<int>&v){
//     int j=0 ,k= v.size()-1 ,i=0;
//     while(j<k&&i<v.size()-2)
//     {
//         if(v[i]==0){
//             swap(v[j],v[i]);
          
//             j++;
//             i++;



//         }
//         else if(v[i]==2){
//             cout<<i<<endl;
//             swap(v[k],v[i]);
//             cout<<v[k]<<" "<<v[i]<<endl;
//             k--;
//         }
//         else{
//             i++;
//           }
    
//     }

//     for (int i = 0; i <v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
    
// }
// int main(){

// vector<int> v;


// for (int i = 0; i < 3; i++)
// {
//      int n;
//      cin>>n;
//      v.push_back(n);

// }
// sort(v);


// return 0;
// }