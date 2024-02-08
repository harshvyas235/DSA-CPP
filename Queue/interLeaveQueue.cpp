#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;


void print(queue<int>s){
    
    while (!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    
}

void interChange(queue<int>&q){
    int size = q.size();
    queue<int> cop;
    int i=0;
    while(i!=size/2){
        cop.push(q.front());
        q.pop();
        i++;
    }
   i=0;
    while(i!=size){
        if(i%2==0 && cop.empty()==false){
            q.push(cop.front());
            cop.pop();
            i++;
        }
        else{
            int val = q.front();
            q.pop();
            q.push(val);
            i++;
        }
    }
    

}

int main(){
queue<int> q;
    int n;
    cout<<"enter the element of the que : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin>>c;
        q.push(c);
    }
    print(q);
    cout<<endl;
    interChange(q);
    print(q);
return 0;
}