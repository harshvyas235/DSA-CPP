#include<iostream>
#include<limits.h>

using namespace std;
int minNumber(int arr[],int size){
    int min= INT_MAX;
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
           
        }
    }
    return min;
    
}
int main(){
    int arr[]={40,6,25,-5,-6,-1,34,10,5};
    int min = minNumber(arr,8);
    cout<<"min number in arr is : "<<min;



return 0;
}