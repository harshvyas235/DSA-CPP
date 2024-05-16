#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

int KthGratest(int arr[],int k, int size){
    
    priority_queue<int,vector<int>,greater<int>>pq;
    int i=0;
    int r=size-1;
        while(i<k){
            pq.push(arr[i]);
            i++;
        }
        
        while(i<=r){
            if(arr[i]>pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
            i++;
        }
    return pq.top() ;
}
int main(){
    int arr[]={100,1,3,4,150};
    int size=5;

    cout<<KthGratest(arr,5,size);

    


return 0;
}