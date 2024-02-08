#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
void print(queue<int>s){
    
    while (!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    
}

void reverseRec(queue<int>&q){
    if(q.empty()){
        return;
    }
    int val = q.front();
    q.pop();
    reverseRec(q);
    q.push(val);
    
}
void reverse(queue<int>&q){
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    
    
    
}
void reverseK(queue<int>&q,int k){
    int size = q.size();
    
    int i =0;
    stack<int> s;
    while (i!=k)
    {
        s.push(q.front());
        q.pop();
        i++;
    }
    cout<<endl;
    cout<<"befor ";
    print(q);
    cout<<endl;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    int s2 = size-k;
    i =0;
    while(i!=s2){
        int val = q.front();
        q.pop();
        q.push(val);
        i++;
    }


    cout<<"print inside the func ";
    print(q);
    cout<<endl;


    
    
}
int main(){
    queue<int> s;
    int n;
    cout<<"enter the element of the que : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        s.push(c);
    }
    print(s);
    reverseK(s,4);
    cout<<endl;
    print(s);

    
    
    
    

return 0;
}