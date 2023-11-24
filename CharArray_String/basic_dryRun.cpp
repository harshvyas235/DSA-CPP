#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[10];
    cin>>ch;
  
    char temp = ch[0];
    cout<<temp<<endl;
    int value =(int)temp;
    cout<<value;

    if(temp=='a'){
        cout<<"yes";
    }


return 0;
}