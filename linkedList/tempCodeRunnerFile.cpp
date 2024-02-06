
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
      