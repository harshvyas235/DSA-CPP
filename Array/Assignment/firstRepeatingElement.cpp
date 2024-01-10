#include<iostream>
#include<string.h>
#include<vector>
#include <unordered_map> 
using namespace std;
int findRepeate(int arr[],int n){
unordered_map<int,int>hash;
for (int i = 0; i < n; i++)
{
    hash[arr[i]]++;

}
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<hash[arr[i]]<<endl;
// }

for (int i = 1; i < n; i++)
{
    
   if(hash[arr[i]]>1){
    return i+1;
   }

}
return -1;



}
int main(){

int arr[]={2,2,3,4,2,4,0};
int ans = findRepeate(arr,6);
cout<<ans;
return 0;
}