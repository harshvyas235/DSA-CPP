#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int min(int arr[],int size,int index,int minnum){
     
    if(index>=size){
        return minnum;
    }
    if(arr[index]<minnum){
        minnum=arr[index];
    }
    min(arr,size,index+1,minnum);

   

}
void evenVector(int arr[],vector<int>& ar, int size , int index){
    if(index>=size){
        return;
    }
    if (arr[index] % 2==0)
    {
        ar.push_back(arr[index]);
    }
    evenVector(arr,ar,size,index+1);
}


void digit(int num){

    if(num ==0){
        return;
    }
  

    digit(num/10);
      int digi= num%10;
    cout<<digi<<" ";
    
}
int main(){
int n= INT16_MAX;
int arr[]={0,5,3,2,56};
vector<int> ab;

// cout<<"min number is "<<min(arr,5,0,n);
evenVector(arr,ab,5,0);

digit(4215);








return 0;
}