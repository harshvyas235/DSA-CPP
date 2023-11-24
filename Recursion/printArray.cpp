#include<iostream>
#include<limits.h>
using namespace std;
int print(int arr[],int size,int i,int min){
    
    
    if(i==size){
        return min;
    }
   if(arr[i]<min){
    min=arr[i];
    
   }

   return print(arr,4,++i,min);
   
 
   

}

int main(){
int arr[4]={2,-1,45,0};
int min = INT_MAX;
int ans=print(arr,4,0,min);
cout<<ans;
return 0;
}