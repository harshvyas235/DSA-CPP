#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;
void getMidd(stack<int> &st ,int index,int &ans,int size){
    if(index == size){
        ans = st.top();
        return ;
    }
    index++;
    int val = st.top();
    st.pop();
    getMidd(st,index,ans,size);
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
    
    int size= st.size();
    int index;
    if(size%2==0){
        index= size/2;

    }
    else{
        index= size/2 +1;
    }
    int ans =-1;
//    cout<<st.size();
   cout<<endl;

   print(st);
   getMidd(st,1,ans,index);
//    cout<<endl;

//    cout<<st.size();

   cout<<endl;
   print(st);
   cout<<ans;
   cout<<endl;


   cout<<st.size();


return 0;
}