#include<iostream>
using namespace std;
void find(int arr[],int s, int e,int fin){
    int mid =s+((e-s)/2);
    if(s>e){
        cout<<"not found";
        return;
    }
    if(arr[mid]==fin){
      cout<<mid;
      return;
    }
    if(arr[mid]>fin){
        find(arr,s,mid-1,fin);
    }
   else{
     find(arr,mid+1,e,fin);
   }
    

    
}
int main(){
    int arr[]={1};
    int s=0, e=0,fin=1;
    find(arr,s,e, fin);
    


return 0;
}