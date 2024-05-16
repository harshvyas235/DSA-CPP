#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void playthegame(int num){
    if(num==10){
        return;
    }
    cin>>num;
    cout<<"play the number "<<num<<endl;
    playthegame(num);

    cout<<"hello "<<num<<endl;

}
int main(){
int num =1;
playthegame(num);
return 0;
}