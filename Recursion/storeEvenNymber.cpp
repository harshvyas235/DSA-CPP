#include<iostream>
#include<vector>
using namespace std;
void stor(int arr[],int size,vector<int>& v,int index){
    if(index>=size){
        return;
    }
    if(arr[index]%2==0){
        v.push_back(arr[index]);
    }
    stor(arr,size,v,++index);
}
int main(){
    int arr[5]={1,2,2,10,5};
    vector<int> v;
    stor(arr,5,v,0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }



return 0;
}