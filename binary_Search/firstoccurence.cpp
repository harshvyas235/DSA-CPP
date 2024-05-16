#include<iostream>
using namespace std;
int findfirstoccurence(int arr[],int n,int s, int e)
{
    int ans =0;
    int first = 0;
    int last =0 ;
    int mid = s+(e-s)/2;
 while(s<=e){
    if(arr[mid]==n){
        first =mid;
        e =mid-1;
        }
        if(arr[mid]>n){
            e=mid-1;
        }
        if(arr[mid]<n){
            s=mid+1;
        }
 mid = s+(e-s)/2;

 }
 s=0,e=6;
 mid = s+(e-s)/2;
 while(s<=e){
    if(arr[mid]==n){
        last =mid;
        s=mid+1;
        }
        if(arr[mid]>n){
            e=mid-1;
        }
        if(arr[mid]<n){
            s=mid+1;
        }
 mid = s+(e-s)/2;

 }

if(first==0){
return ans;
}
 ans= last-first+1;
 return ans;
 

}
int main()
{
    int arr[7]={0,1,1,1,3,5,5};

int n;
cin>>n;
   cout<<"total occurence of the " <<n<< " is : "<<findfirstoccurence(arr,n,0,6);


return 0;
}