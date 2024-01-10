#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool check(string& s,int i,int j){
    if(i>j){
        return true;
    }
    bool ans;
    if(s[i]==s[j]){
        ans= check(s,i+1,j-1);
    }
    else{
        return false;
    }
    return ans;
}
int main(){
string s;
cin>>s;
bool ans = check(s,0,s.length()-1);
if (ans==true)
{
    cout<<"it is palindrome";
}
else{
    cout<<"false";
}

return 0;
}