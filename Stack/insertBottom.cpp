#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;
void insertBottom(stack<int>&st){
    if(st.empty()){
        int n;
        cout<<"enter the value that u want to insert at bottom : ";
        cin>>n;
        st.push(n);
        return;

    }
    int val= st.top();
    st.pop();
    insertBottom(st);
    st.push(val);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    stack<int> st;
    // cout<<st.size();
    for(int i =1;i<7;i++){
        int n ;
        cin>>n;
        st.push(n);
    }

    cout<<"before : ";
    print(st);
    cout<<endl;

    
    insertBottom(st);
    cout<<"after : ";
    print(st);
    cout<<endl;
    

return 0;
}