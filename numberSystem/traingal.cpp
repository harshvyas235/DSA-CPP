#include<iostream>
using namespace std;
 void typeOfTraingle(int x, int y,int z){
    if(x==y&&y==z){
        cout<<"this traingle is the equilateral"<<endl;
    }
    else if((x==y&&y!=z)||(x==z&&z!=y)||(z==y&&y!=x)){
        cout<<"this traingle is isoselaus";

    }
    else{
        cout<<"traingle is scaler";
    }

   
 }

int main(){

int x,y,z;
cin>>x>>y>>z;

if(x+y<z||y+z<x||x+z<y|| x==0&&y==0&&z==0){
    cout<<"this is not follow the traingle"<<endl;
}
else{
    cout<<"this is follow the traingle"<<endl;
    typeOfTraingle(x,y,z);
}



return 0;
}