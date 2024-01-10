#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){
int a=5;
int *ptr = &a;
// char name= 's';
// char *cptr=&name;
// cout<<a<<" "<<*ptr<<" "<<ptr<<" "<<&a<<" "<<&ptr<<endl;
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(cptr)<<endl;
// cout<<name<<" "<<*cptr<<" "<<cptr<<" "<<&name<<" "<<&cptr<<endl;
// long int d = 894;
// long *dptr=&d;
// cout<<sizeof(dptr)<<endl;
// cout<<d<<" "<<*dptr<<" "<<dptr<<" "<<&d<<" "<<&d<<endl;
// int *q=ptr;
// cout<<*q<<endl;

// int arr[4]={35,5,3,4};
// cout<<0[arr];
int **q= &ptr;

cout<<q<<" "<<&ptr<<" "<<*q<<endl;



return 0;
}