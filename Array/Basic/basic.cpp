 /*#include<iostream>
 using namespace std;

 // arr[i] == value at[base address +(index*size of data tyoe)]
 int main(){
 int arr[10];
 for (int i = 0; i < 10; i++)
 {
  cin>>arr[i];
   
 }
  for (int i = 0; i < 10; i++)
 {
  arr[i]=2*arr[i];
  cout<<arr[i];

   
 }
 

 return 0;
 } */


 /*linear search in the arr*/

 #include<iostream>
 using namespace std;
 int main(){
    
 int arr[]={2,45,65,23,56};
 int n;
 cout<<"enter the number : ";
 cin>>n;
 bool flag=0;

 int size=sizeof(arr)/sizeof(arr[0]);

 for (int i = 0; i < size; i++)
 {
    if(arr[i]==n){
        flag=1;
        cout<<arr[i]<<" is present in the arr at index "<<i<<endl;
        break;

    }
    
 }
 if(flag){
    cout<<"found";
 }
 else{
    cout<<"not found";
 }

 


 return 0;
 }
