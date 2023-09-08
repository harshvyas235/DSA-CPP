#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int i=0;
    int decimal=0;
    cout<<decimal<<endl;
    cout<<n<<endl;
    while (n!=0)
    {
      int  bit=n&1;
        if (bit==1)
        { cout<<decimal<<endl;
            decimal= pow(2,i)+decimal;
           
        }

        i++;
        n=n>>1;
        

    }
    return decimal;
    
    
}
int main(){
    
int n;
cin>>n;

// cout<<binaryToDecimal(n);
int ans=0;
int i=0;
while (n!=0)
{
    int bit = n & 1;
    if (bit==1)
    {
        ans= ans + pow(2,i);
    }
    n=n>>1;
    i++;
    
    
}
cout<<ans;



return 0;
}