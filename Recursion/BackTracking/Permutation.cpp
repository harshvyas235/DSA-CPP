#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
int arr[2]={3,4};
int i=0;
int j=1;
cout<<i<<"-> "<<arr[i]<<endl<<j<<" -> "<<arr[j]<<endl;
swap(arr[i],arr[j]);
cout<<i<<"-> "<<arr[i]<<endl<<j<<" -> "<<arr[j]<<endl;


return 0;
}