#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int n){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==n){
            return mid;
        }
        else if(arr[mid]>n){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int exponen(int arr[],int n){
    int i =0;
    int j=1;
    while(arr[j]<=n){
         i =j;
         j=j*2;
    }
    return binarySearch(arr,i,j,n);
}
int main(){

int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
int n ;
cin>>n;

cout<<"intdex of the " <<n <<" "<<exponen(arr,n);

return 0;
}
