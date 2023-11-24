// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

#include<bits/stdc++.h> 
#include<string.h>
using namespace std;
void removeDuplicate(string &str,int k){
sort(str.begin(), str.end());
int i =0;
while(i<str.length()){
    if(str[i]==str[(i+k)-1] && (i+k)-1<str.length()){
        str.erase(i,k);
    }
    else{
        i++;
    }
}
cout<<str;
}
int main(){
string str;
cin>>str;
int k;
cin>>k;
removeDuplicate(str,k);

return 0;
}