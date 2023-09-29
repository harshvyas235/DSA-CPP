#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int left=0,right=size-1;
   while (left<=right)
   {
    swap(arr[left],arr[right]);
    left++,right--;
   }
   
    
}
int main(){
int arr[]={10,23,45,4,5,3,6};
reverse(arr,7);
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}



return 0;
}