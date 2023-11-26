#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int find(string& s,int i,char a,int& ans){
    
    if(i>=s.length()){
        return ans;
    }
    if(s[i]==a){

        ans=i;
    }
    return find(s,i+1,a,ans);



}




int main(){
    string s="abbbsbfba";
   
    char a='z';
   

    int ans=-1;

    int index= find(s,0,a,ans);
    cout<<index;
return 0;
}