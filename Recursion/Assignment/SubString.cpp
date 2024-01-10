#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void substring(string& s,string& output,int i){
    if(i>=s.size()){
        cout<<"->"<<output<<endl;
        return;
    }

output.push_back(s[i]);
substring(s,output,i+1);
output.pop_back();
substring(s,output,i+1);



}
int main(){
string s;
cin>>s;
string output ="";
substring(s,output,0);


return 0;
}