#include<iostream>
#include<string.h>
#include<stack>
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
void insertAtTail(Node* &head,Node* &tail,int num){
    if(head==NULL){
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

void atanyPosition(Node* &head,int pos,int leng,int val){

    Node*firstNode = head;
    Node* temp = new Node();
    if(pos<=1){
        Node* newNode= new Node(val);
        newNode->next=head;
        head = newNode;

    }
    if(pos>1 && pos<leng){
        int i=1;
        while(i!=pos){
            temp=firstNode;
            head=firstNode->next;
            i++;
        }
        Node* newNode= new Node(val);

        temp->next=newNode;
        newNode->next=firstNode;
    }
    if(pos>=leng){
       while(firstNode->next!=NULL){
        firstNode=firstNode->next;
        continue;
       }
        Node* newNode= new Node(val);
       firstNode->next=newNode;

    }
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
    //there is one more method of the reverse the linked list using the recursion


}
void find(Node* &s,Node* &f){
        while(f!=NULL){
            f=f->next;
            if(f!=NULL){
                f=f->next;
                s=s->next;
                // cout<<s->val<<endl;
            }
            else{
                return;
            }
        }
        return;
    }
 

Node* middl(Node* &head){
        Node* temp= head;
        Node* s =head;
        Node* f= head;
        while(f->next!= NULL){
            f= f->next;
            if(f->next!=NULL){
               f= f->next;
               s= s->next;
            }
            else{
                // cout<<s->data<<": s ka data"<<endl;
                return s;

            }
        }
        return s;
    }
void reverse(Node* &head){
        Node* prev= NULL;
        Node* curr= head;
        while(curr!=NULL){
            curr=curr->next;
            head->next=prev;
            prev=head;
            if(curr!=NULL){
                head=curr;
            }
        }
      
    }
bool isPalindrome(Node* head) {

       if(head->next==NULL){
           return true;
       }
    //    Node* middle = middl(head);
    //    printAllNode(middle->next);
    //    cout<<endl;

    //    Node* head2= middle->next;
    //    printAllNode(head2);
    //    cout<<endl;

    //     reverse(head2);
    //     printAllNode(head2);
    //    cout<<endl;
    //     Node*temp= head;
    //     while(head2!=NULL&&temp!=NULL){
    //         if(temp->data==head2->data){
    //             temp= temp->next;
    //             head2=head2->next;
    //         }
    //         else{
    //             return false;
    //         }

    //     }
    //    return true;

       // using the stack 
       Node* mid = middl(head);
       cout<<mid->data;
       Node* temp2=head;
       Node* node2= mid->next;
       Node* temp = node2;
       stack<int> st;
       while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
       }
       while(node2!=NULL ){
        if(st.top()!=temp2->data){
            return false;
        }
        else{
        
            temp2=temp2->next;
            st.pop();
        }
       }
       return true;
      


    }

int removeK(Node* head,int k){
    Node* temp = head;
    int len =findLength(temp);
    int postition = len-k;
    int i=1;
    while(i!=postition){
        temp=temp->next;
        i++;
    }
    return temp->data;
}
// Node* oddlist(Node*head){
//     if(head==NULL){
//         return NULL;
//     }
    
//     Node* odd = new Node();
//     odd->data=head->data;
    
//     odd->next= oddlist(head->next->next);

//     return odd;
    
    
// }


Node* Clone(Node* list, bool copyOdd = true) {
    if (list == NULL) return NULL;

    if (!copyOdd) {
        // Move to the next node for even indices
        return Clone(list->next, !copyOdd);
    }

    Node* result = new Node;
    result->data = list->data;
    

    result->next = Clone(list->next, !copyOdd);

    return result;
}
Node* evenClone(Node* list,int count ) {
    
   
    if (list== NULL) return NULL;
    if(count%2!=0){
        
         return evenClone(list->next,count+1);
    }
    
    else{
    Node* result = new Node;
    result->data = list->data;
   
    
    
    result->next = evenClone(list->next,count+1);
     return result;
    }

   
}
// void headcheck(Node* &head){
//     head=head->next;
//     head->next=NULL;
// }
int main(){
    Node*head=NULL;
    Node*tail=NULL;

    insertAtTail(head,tail,1);


    Node*temp=head;
    delete temp;
    cout<<temp->next;
    // insertAtTail(head,tail,4);
    // insertAtTail(head,tail,3);
    // insertAtTail(head,tail,5);
    // insertAtTail(head,tail,3);
    // insertAtTail(head,tail,2);
    // insertAtTail(head,tail,1);
    // printAllNode(head);

    // atanyPosition(head,7,7,100);
    // cout<<endl;
    // printAllNode(head);
    // cout<<endl;
   
  

    


//     Node* odd = Clone(head);
//     cout<<endl;
//    Node* even = evenClone(head,1);
//     printAllNode(odd);
//     cout<<endl;


    //  printAllNode(head);
    // cout<<endl;
    // printAllNode(even);
    



//     int k =5;

//    int ans = removeK(head, k );
//    cout<<endl<<ans;




       
     
   
     
    //  cout<<temp->data<<temp->next;

     
    

    // printAllNode(head);
    // cout<<endl<<findLength(head)<<endl;
    // cout<<"before reverse head is : "<<head->data<<endl;

    // reverse(head,tail);
    
    
    // printAllNode(head);
   
    // cout<<endl<<"after reverse head is : "<<head->data<<endl;

    //find the middle of the list 
    
    // Node* s= head;
    // Node*f= head;
    // find(s,f);
    // cout<<endl<<s->data;




    

    
    
    // printAllNode(head);
    
    // Node* first=new Node(3);
    // Node* second=new Node(4);
    // Node* third=new Node(5);
    // Node* fourt=new Node(6);
    



return 0;

}