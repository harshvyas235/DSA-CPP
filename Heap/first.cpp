#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class heap{
    public:
    int capacity;
    int size;
    int *arr;

    heap(int cap){
        this->capacity=cap;
        this->size=0;
        this->arr=new int[cap];
    }

    void insert(int val){
        if(size>=capacity-1){
            cout<<size<<endl;
            cout<<"over flow "<<endl;
            return; 
        }
        int index = size+1;
       arr[index]=val; // store the value at the correct index

     // start from the correct index

    size++; // increment size after inserting the element
        
        while(index>1){
            int parent = arr[index/2] ;

            if(parent <arr[index]){
                swap(arr[index],arr[index/2]);
                index= index/2;
            }
            else{
                return;
            }

        }

    }

    int deleteFromHeap(){
        int index=1;
        int saved= arr[1];
         arr[1]=arr[size];
         size--;
        while(index<size){
            int leftIndex= index*2;
            int rightIndex= 2*index+1;

            int largestIndex = index;
            if(leftIndex<=size&& arr[largestIndex]<arr[leftIndex])
            { 
                 largestIndex=leftIndex;
            }
            
             if(rightIndex<=size&& arr[rightIndex]>arr[largestIndex])
            {
                cout<<arr[rightIndex]<<arr[largestIndex]<<endl;

                 largestIndex=rightIndex;
            }

             cout<<largestIndex<<endl;
            if(index==largestIndex){
                break;
            }
            else{
                swap(arr[index],arr[largestIndex]);
                index= largestIndex;
            }
        }

        return saved;
    }

    void print (){
        for (int i = 1; i <=size; i++)
        {
            cout<<arr[i]<<" ";
        }

        
    }


    void heapify(int arr[],int size, int index){
       if(index==size){
        return ;
       }

        int leftIndex= index*2;
            int rightIndex= 2*index+1;

            int largestIndex = index;
            if(leftIndex<=size&& arr[largestIndex]<arr[leftIndex])
            { 
                 largestIndex=leftIndex;
            }
            
             if(rightIndex<=size&& arr[rightIndex]>arr[largestIndex])
            {
                

                 largestIndex=rightIndex;
            }

            if(index==largestIndex){
                return;
            }
            else{
                
                swap(arr[index],arr[largestIndex]);
                index= largestIndex;
                heapify(arr,size,index);


            }
      

      return;


    }



    void buildHeapFromArray(int arr[],int size){
        int end = size/2+1;
        for (int i = 1; i < end; i++)
        {
           heapify(arr,size,i);

        }
        
    }
};
int main(){
  heap h(25);
  h.insert(10);
  h.insert(20);
  h.insert(11);
  h.insert(6);
 

int arrToHeap[]={-1,10,20,11,6};


  h.print();
  cout<<endl;
//    cout<<h.deleteFromHeap();
//    cout<<endl;
//   h.print();

//   h.arr[1]=1;
//    cout<<endl;

//     h.print();

//   h.heapify(h.arr,h.size,1);

//    cout<<endl;

//     h.print();
//    cout<<endl;


for (int i = 0; i < 4; i++)
    {
        cout<<arrToHeap[i]<<" ";
    }
   cout<<endl;

    h.buildHeapFromArray(arrToHeap,4);
    for (int i = 1; i < 5; i++)
    {
        cout<<arrToHeap[i]<<" ";
    }
    
  

return 0;
}