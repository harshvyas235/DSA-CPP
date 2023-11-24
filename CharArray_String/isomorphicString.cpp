#include<iostream>
#include<string.h>
using namespace std;

bool check(string s,string t){
    int arr[256]={0};
    
    int i=0,j=0;
  
     for (auto ch:s)

     { 
       
        if (arr[ch]==0)
          {
            arr[ch]=t[i];
            
            i++;
          }
          if(arr[ch]!=0 && arr[ch]==t[i]){
            i++;
          }
          else{
            return false;
          }
     
       
     }
     return true;
}   

int main(){

string s;
string t;
cin>>s;
cin>>t;
cout<<s.length();
cout<<t.length();
if(check(s,t)==true){
    cout<<"given string is isomorphic";
}
else{
    cout<<"this is not isomorphic";
}
return 0;
}