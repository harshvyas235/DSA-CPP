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
    int index=1;
    if(size%2==0){
        size= size/2;

    }
    else{
        size= size/2 +1;
    }
    int ans =-1;
//    cout<<st.size();
   cout<<endl;

   print(st);
   getMidd(st,index,ans,size);
//    cout<<endl;

//    cout<<st.size();

   cout<<endl;
    cout<<ans;
   print(st);
  
   cout<<endl;


   cout<<st.size();


return 0;
}