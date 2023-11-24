#include<iostream>
#include<string.h>
using namespace std;

bool checkvowel(char ch){
    if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
        return true;
    }
    else{
        return false;
    }
}

string reverseVowels(string s) {
        int i =0,j=s.length()-1;
        while(i<=j){
            
            if(checkvowel(s[i]) && checkvowel(s[j])){
                cout<<"yha pe h"<<endl;
                swap(s[i],s[j]);
                i++;
                j--;
            }
            
            else if(checkvowel(s[i])==false){
               
                i++;
            }
            else{
                
                j--;
            }
        }
        return s;
    }
int main(){
    string s="hEllo";
    cout<<"string is "<<reverseVowels(s);


return 0;
}