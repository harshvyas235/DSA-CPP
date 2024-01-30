#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class Stack{
public:
    int* arr;
    int size;
    int top;
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top=-1;


    }
    void getSize(){
        cout<<size<<endl;
    }
  bool is_empty(){
    if(top == -1){
        return true;
    }
    else{
        return false; 
    }
  }

  void push(int val){
    if(top<size){
        top++;
        arr[top]=val;
    }
    else{
        cout<<"stack is overflow ";
    }
  }

  void pop(){
    if(is_empty()){
        cout<<"stack is empty ";
        }
    else{
        top--;
        }    
   }
  
  int getLength(){
     if(is_empty()){
        return 0;
    }
    else{
        return top+1;

    }
  }

  int get_top(){
    if(is_empty()){
        return -1;
    }
    else{
        return arr[top];
    }
  }

  void print(){
    if(is_empty()){
        cout<<"stack is empty";
    }
    else{
        
        
            cout<<"top : "<<top<<endl;
            cout<<"length of the stack : "<<getLength()<< endl;
            getSize();
            cout<<arr[top]<<endl;
        
        
    }
    
    }

};
int main(){
    Stack s(7);
    // s.get_top();
    // cout<<s.getLength();
    // s.print();
    
    // cout<<s.getLength();
//    s.getSize();
    s.push(5);
    s.print();
    s.push(4);
    s.print();
    s.push(7);
    s.print();
    s.push(10);
    s.print();
    s.push(14);
    s.print();
    s.push(17);
    s.print();
    s.push(34);
    s.print();
    s.push(23);
    s.print();
    s.push(43);
    s.print();
    // s.push(5);
    // s.push(5);
    // s.push(5);
    // s.push(5);
    // s.push(5);
    // s.push(5);

    // cout<<s.getLength();
   
  




return 0;
}