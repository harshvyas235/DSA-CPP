#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;
int main(){
    string str = "BABBAR";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
         cout<<st.top()<<" ";
         
        
    }
    cout<<endl<<endl;
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        

    }
    cout<<st.size();
   
    

return 0;
}