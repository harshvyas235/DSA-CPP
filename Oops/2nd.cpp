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

class parent {
    private:
    int c;

    protected:
    int h =10;
    public:

    int a;
    void hello(){
        cout<<"hello";
    }
};
class son : protected parent{
    public:
     void check(){
       cout<< this->h;
     }

};
int main(){
    Bird p;
    Pegion m;
    m.print();
  son a;
  a.check();  
    
   


return 0;
}