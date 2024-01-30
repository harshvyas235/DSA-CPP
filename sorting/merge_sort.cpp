#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = (s+e)/2;
    int leftSize=mid-s+1;
    
    int rightSize= e-mid;
    int *left= new int[leftSize];
    int *right=new int [rightSize];
    int i=0,k=0;
    int j = s;

    for (int i = 0; i < leftSize; i++)
    {
        left[i]=arr[j];
        j++;
    }
     for (int i = 0; i < rightSize; i++)
    {
        right[i]=arr[j];
        j++;
    }
    j=s;
    

    while (i<leftSize && k<rightSize)
    {
        if(left[i]<right[k]){
            arr[j]=left[i];
            j++;
            i++;
            
        }
        else{
            arr[j]=right[k];
            j++;
            k++;
        }
        
    }
    while(i<leftSize){
        arr[j] = left[i];
        j++; i++;

    }
    while (k<rightSize)
    {
        arr[j]=right[k];
        k++,j++;
    }
    delete[] left;
    delete[] right;
    
}
void mergeSort(int arr[],int s,int e){
    if(s>e){
        return;
    }
    if (s==e)
    {
        return;
    }
    
    int mid = (s+e)/2;
    //  cout<<"e : "<<e<<" ";
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    // cout<<"e : "<<e<<" ";


    merge(arr,s,e);

    

}
int main(){
int arr[]={4,-63,-3,6,2,1};
mergeSort(arr,0,5);

for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}
