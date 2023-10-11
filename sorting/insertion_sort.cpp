#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr){
   for (int  i = 1; i < arr.size(); i++)
   { int j =i-1;
   int temp =i;

          while (j>=0&& arr[j]>temp){
                    arr[j+1]= arr[j];
                    j--;
          }
          arr[j+1]=temp;
                   
            
          
          
   }


   
}
int main(){
    vector<int> v;

for (int i = 0; i < 5; i++)
{
    int n ;
    cin>>n;
    v.push_back(n);
}
insertionSort(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i];
}



return 0;
}