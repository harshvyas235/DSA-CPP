#include<iostream>
using namespace std;
class Student{
    public:
        int a;
        int b;
        Student(){
            cout<<"this the default constructor"<<endl;
        }
        void play(){
            cout<<"I am playing"<<endl;
        }
}m;
int main(){
    Student s;
    Student b;
    s.play();
    s.a=5;
    cout<<s.a;


return 0;
}