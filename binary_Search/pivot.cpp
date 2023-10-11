// find the pivot element in the sorted rotate array
#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int> arr){
    int s = 0;
    int e= arr.size()-1;
    int mid= s+(e-s)/2;

    while (s<=e)
    {  
       if(arr.size()==1){
        return 0;
       }
       if (arr.size()==2)
       {
         return 1;
       }
       
       if(s==e){
        return s+1;

       }
        if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]){
            return mid-1;
        }
        else if (arr[mid]>arr[s])
        {
            s= mid;
        }
        else 
        {
            e= mid;
        }
         mid= s+(e-s)/2;

        //   cout<<mid<<" "<< e<<endl;

        
        
    }
    return -1;
    
}
int main(){
    
    vector<int> v;
    int n;
    cout<<"enter the no of element in the array : ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);

    }
    
cout<<"the pivot index in the aaray : "<<pivot(v);


return 0;
}