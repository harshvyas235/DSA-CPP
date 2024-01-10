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
void insertAtHead(Node* &head,Node* &tail,int num){

    if(head==NULL){
        Node* newNode= new Node(num);
        head=newNode;
        tail=newNode;

    }
    else{
        Node* temp= new Node(num);
        temp->next=head;
        head=temp;
    }
    
}

void printAllNode(Node* &head){
    
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
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
int findLength(Node*&head){
    int count=0;
    Node* temp= head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    return count;
}

void reverse(Node* &head,Node* &tail){
    tail=head;
    Node* curr= NULL;
    Node* prev = head;
    while(prev!=NULL){
        prev= head->next;
        head->next= curr;
        curr=head;
        if(prev!=NULL){
            head=prev;
        }
        
    }
}


int main(){
    Node*head=NULL;
    Node*tail=NULL;

    insertAtTail(tail,head,10);
    insertAtTail(tail,head,20);
    insertAtTail(tail,head,30);
    insertAtTail(tail,head,40);
    insertAtTail(tail,head,50);
    insertAtTail(tail,head,60);

    printAllNode(head);
    cout<<endl<<findLength(head)<<endl;
    cout<<"before reverse head is : "<<head->data<<endl;

    reverse(head,tail);
    
    
    printAllNode(head);
    cout<<endl<<"after reverse head is : "<<head->data<<endl;



    

    
    
    // printAllNode(head);
    
    // Node* first=new Node(3);
    // Node* second=new Node(4);
    // Node* third=new Node(5);
    // Node* fourt=new Node(6);
    



return 0;
}