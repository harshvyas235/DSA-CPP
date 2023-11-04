#include<iostream>
using namespace std;
void fabo(int n ){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        int ans = fabo(n-1)+fabo(n-2);
        return ans ;

    }

}

int main(){
    int n;
    cin>>n;
    fabo(n);


return 0;
}