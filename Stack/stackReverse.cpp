#include<iostream>
#include<string.h>
#include<stack>
#include<vector>
using namespace std;


void insertBottom(stack<int>&st,int n){
    // if(st.empty()){
    //     st.push(n);
    // }
    
    // int val = st.top();
    // st.pop();
    // insertBottom(st,n);

    // st.push(val);

    if(st.empty()){
        
        st.push(n);
        return;

    }
    int val= st.top();
    st.pop();
    insertBottom(st,n);
    st.push(val);
    


}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int val = st.top();
    st.pop();
    reverse(st);
    insertBottom(st,val);
}
void print(stack<int> st){
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}

int main(){
    stack<int> st;
    int n;
    cout<<"enter the number of element of the stack ";
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        st.push(c);
    }
    print(st);
    cout<<endl;
    reverse(st);
    print(st);
    

    





return 0;
}