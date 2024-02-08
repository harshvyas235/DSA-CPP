#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;

void insertSort(stack<int> &st,int n){
    if(st.empty()){
        st.push(n);
        return;
    }
    if(n>=st.top() ){
        st.push(n);
        return;
    }
    int val = st.top();
    st.pop();
    insertSort(st,n);
    st.push(val);
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
    insertSort(st,3);
    print(st);
    
    
    





return 0;
}