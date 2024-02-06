#include<iostream>
#include<string.h>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string s ="aabb";
    int leng = s.length();
    int i =0;
    string s2;

    
        for(int i=0;i<leng;i++){
            char c = s[i];
            s2=s.erase(i,1);
            cout<<s <<endl;
            
            cout<<s2<<endl;
             
            if(s2.find(c)==string::npos){
                
                cout<<"loop break at "<<i;
                break;
            }
            
            
        }



return 0;
}