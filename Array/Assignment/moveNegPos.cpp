#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
vector<int> arr={-2,-3,-2,-5,-0,-3,-2};
int l=0;
int h= l+1;
while(h<arr.size()&&l<arr.size()){
    if(arr[h]<0 && arr[l]>0){
        swap(arr[h],arr[l]);
        h++;
        l++;
    }
    else if(h>0){
        h++;
    }
    else{
        l++;
        h=l;
    }
}

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
return 0;
}