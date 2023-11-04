#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){

    string key ="this is the fox";
    string messages="abcd";
    char mapping[300]={0};
    char start = 'a';
    for(auto ch: key){
        // cout<<ch<<endl;
       if (ch!=' ' && mapping[ch]==0)
       {
         mapping[start]=ch;
         start++;
       }
       
     
       
    }
    for (int i = 0; i < 100; i++)
    {
        cout<<mapping[i]<<endl;
    }
    
    string ans;
 
 for ( auto ch:messages)
 {
    char decode= mapping[ch];
    ans.push_back(decode);

 }
 cout<<"harsh "<<ans;


 
 




    
    

return 0;
}