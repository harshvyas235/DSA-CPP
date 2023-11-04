#include<iostream>
using namespace std;
// int missingNumber(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid = s+(e-s)/2;
//     int ans =9;
//     while (s<=e)
//     {
//        if(arr[mid]-mid==2){
//         ans = mid+1;
//         e=mid-1;

//        }
//        if(arr[mid]-mid==1){
//         s=mid+1;
//        }
//        mid=s+(e-s)/2;
//     }
//     return ans;
    
// }
// int main(){
// int arr[]={2,3,4,5,6,7,8,9};
// int n =9;
// cout<<"missing element for 1 to 9 is "<<missingNumber(arr,9);

// return 0;
// }

int findMissingElement(int arr[], int n) {
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s <= e) {
    int diff = arr[mid] - mid;

    if(diff == 1) {
      //right me jao
      s = mid+1;
    }
    else {
      //ans store
      ans = mid;
      //left me jao
      e = mid - 1;
    }
     mid = s + (e-s)/2;
  }


  //HW -> How can we remove this, by modifying the above logic
  if(ans +1 == 0)
    return n+1;
  
  return ans+1;
}


int main() {

  int arr[] = {1,2,3,4,5,6,7,8};
  //int target = 30;
  int n =8;

  cout<<"Missing element is: " << findMissingElement(arr, n);

  // int ans = findTotalOccurence(arr, n, target);
  // cout << "Ttoal Occ is:  "<< ans << endl;
  // int ansIndex = findLastOccurence(arr, n, target);

  // if(ansIndex == -1) {
  //  cout << "Element not found " << endl;
  // }
  // else {
  //  cout << "Element found at Index: " << ansIndex << endl;
  // }
  

  return 0;
}