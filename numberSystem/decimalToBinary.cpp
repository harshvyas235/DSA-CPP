/* decimal to binary by divide the number by 2
#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int bit,binaryno=0;
    int i=0;
    while (n>0)
    {
        
       bit = n%2;
       binaryno =bit* pow(10,i++)+binaryno;
       n=n/2;

    }
    return binaryno;

}

int main(){

    int n;
    cin>>n;
    cout<<decimalToBinary(n);



return 0;
}*/



//decimal to binary using the right shift operator

#include<iostream>
#include<cmath>
using namespace std;
int decimalTOBinary(int n){
    int bit=0,binaryno=0;
    int i=0;
    while (n>0)
    {
        bit= n&1;
        binaryno= bit*pow(10,i++)+binaryno;
        n=n>>1;
        cout<<n;
    }
    
    return binaryno;
}

int main(){
    int n;
    cin>>n;
    cout<<decimalTOBinary(n);



return 0;
}