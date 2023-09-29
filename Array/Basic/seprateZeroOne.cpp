#include<iostream>
using namespace std;

    
void seprate(int arr[], int n){
    int start = 0 ,end=n-1;
  
    while (start<=end)
    {
       if (arr[start]==0 &&arr[end]==0)
       {
        start++;

       }
       else if (arr[start]==1 && arr[end]==0)
       {
        swap(arr[start],arr[end]);
        start++;
        end--;
       }
       else if (arr[start]==1&&arr[end]==1)
       {
        end--;
       }
       
       else{
        start++;
        end--;
       }
       
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

int n ;
cin>>n;

int arr[n];
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
int length = sizeof(arr)/sizeof(arr[0]);

seprate(arr,length);


return 0;
}