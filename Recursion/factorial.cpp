#include<iostream>
using namespace std;
long long int fact(int n){
    int ans;
    if(n==1||n==0){
        return 1;
    }
    else{
         ans = n*fact(n-1);
    
    }
    return ans;
}
int main(){

int n;
cin>>n;
cout<<fact(n);
return 0;
}