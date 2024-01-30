// https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
       if(head==NULL) return;
       
       Node* temp=head;
       
       for(int i=1;i<M;i++){
           if(temp==NULL) return;
           temp=temp->next;
       }
       if(temp==NULL) return;
       
       Node* mth=temp;
       temp=temp->next;
    //   if(temp==NULL) return;
       
       for(int i=0;i<N;i++){
           if(temp==NULL) return;
           Node*it=temp->next;
          
           delete temp;
           temp= it;
           mth->next=temp;
       }
       
    //   if(temp==NULL) return;
       
       linkdelete(temp,M,N);
       
       
    }
    
};
