#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
 bool isPalindrome(int x) {
        int num2=0;
        int num1=x;
        while(x!=0){
            int a= abs(x%10);
            cout<<"a:"<<a<<endl;

            num2= num2*10+a;
            cout<<num2<<endl;
            x=x/10;
        }
        

        if(num1==num2){
      
            return true;
        }
        return false;
    }
int main(){
cout<<isPalindrome(-12-1);
return 0;
}