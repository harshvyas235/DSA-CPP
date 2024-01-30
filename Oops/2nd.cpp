#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class Bird{
    
    private:
    int c;
    public:
    int a ,b;
    void get(){
        cout<<a<<b<<c;
    }  
    Bird(){
       this->a=10;
       this->b=15;
       this->c=11;

    }
   
    Bird(int a,int b,int c){
        this->b=b;
        this->a=a;
        this->c=c;
        
    }
};
class Pegion : public Bird{
    public:
    int l=10 ;
    void print(){
        
        
    }
 

};
int main(){
    Bird p;
    Pegion m;
    m.print();
  
    
    
   


return 0;
}