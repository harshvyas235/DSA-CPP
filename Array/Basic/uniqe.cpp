#include<iostream>
using namespace std;
int findunique(int arr[],int n){
    int ans =0 ;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    
    return ans;
}
int main(){
int arr[]={10,12,10,12,6,13,13};
int length = sizeof(arr)/sizeof(arr[0]);
int unique = findunique(arr,length);
cout<<" unique no is : "<<unique;



return 0;
}