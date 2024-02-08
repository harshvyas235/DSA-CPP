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
    if(n>=st.top()){
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


void sort(stack<int>&st){
    if(st.empty()){
        return;
    }
    int val = st.top();
    st.pop();
    sort(st);
    insertSort(st,val);
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
    sort(st);
    print(st);
    
    
    





return 0;
}