// https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1


#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
       this->next=NULL;
    }
    Node(int a){
       this->data=a;
        this->next=NULL;

    }
};

void printAllNode(Node* &head){
    
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtTail(Node* &tail,Node* &head,int num){
    if(tail==NULL){
      Node* newNOde =new Node(num);
      tail=newNOde;
      head=newNOde;
    }
    else{
     Node* newNode= new Node(num);
    tail->next=newNode;
    newNode->next=NULL;
    tail=newNode;
    }
  
    
}
void linkdelete( Node* &head, int M, int N){
  if(head==NULL){
    cout<<"head NULL ho gya h"<<endl;
    return;
  }

  int count =1;
  Node* temp = head;
  Node* newNode=new Node();
   
  while(count!=M){
    if(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    else{
        cout<<"5 temp ka nxt null h "<<temp->data<<endl;
        return;
    }
  }
  if(temp->next!=NULL){
    newNode=temp->next;
  }
  else{
    cout<<"2 temp ka next he NULL h"<<temp->data<<endl;
    return;
  }

  count =0;
  while(count!=N){
    if(newNode->next!=NULL){
        newNode=newNode->next;
        count++;
    }
    else{
        temp->next=newNode->next;
        cout<<"3 new node ka next null h "<<newNode->data<<endl;
        return;
    }

  }
  if(newNode!=NULL){
     temp->next=newNode;
    temp =newNode;
    linkdelete(temp,M,N);
  
  }
  else{
    return;
  }
 
       
    

}
  

 
int main(){

 Node*head=NULL;
    Node*tail=NULL;

    // insertAtTail(tail,head,1);
    // insertAtTail(tail,head,4);
    // insertAtTail(tail,head,3);
    // insertAtTail(tail,head,5);
    // insertAtTail(tail,head,3);
    // insertAtTail(tail,head,2);
    // insertAtTail(tail,head,1);
    // insertAtTail(tail,head,11);
    // insertAtTail(tail,head,12);
    // insertAtTail(tail,head,13);
    // insertAtTail(tail,head,14);

    

    



    printAllNode(head);
    cout<<endl;
    linkdelete(head,2,0);
   cout<<endl;

    printAllNode(head);

    
return 0;
}
    

