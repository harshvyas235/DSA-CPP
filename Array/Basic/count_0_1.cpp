#include<iostream>
using namespace std;
void coutZeroOne(int arr[],int size){
      int zeroCount=0,oneCount=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0){
            zeroCount++;

        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    

    cout<<"number of zero in arr "<<zeroCount<<endl;
    cout<<"number of one in arr "<<oneCount<<endl;


}
int main(){
    int arr[10]={0,54,1,1,1,0,0,00,11,8};
  
    coutZeroOne(arr,10);

   
    


return 0;
}