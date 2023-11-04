#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
void findIndex(string s,int index ,char p){
    if(s[index]=='\0'){
        return;
    }
    if(s[index]==p){
        cout<<index;
    }
    findIndex(s,index+1,p);
}
int main(){
    string s = "babbar";
  
    findIndex(s,0,'b');





return 0;
}