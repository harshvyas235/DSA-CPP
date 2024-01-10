#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void missingNumber(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
    
}
int main(){
vector<int>arr={1,2,3,4,2,2};
int n=arr.size();
for (int i = 0; i < arr.size(); i++)
{
    int a =abs(arr[i]);
    if(arr[a-1]>0){
        arr[a-1]*=-1;
    }
    

}
missingNumber(arr);



return 0;
}