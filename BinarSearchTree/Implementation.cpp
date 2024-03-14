#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;
class Node{

    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

Node* insertBst(Node* root,int data){
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    
    if(data>root->data){
        root->right = insertBst(root->right,data);
    }
    else{
        root->left=insertBst(root->left,data);
    }
    return root;
}

void createNode(Node*& root){
    int data;
    cout<<"enter the value "<<endl;
    cin>>data;
    while(data!=-1){
        // cout<<"ojfsifjs";
        root=insertBst(root,data);
        // cout<<"ojfsifjs";


        // cout<<"enter the value "<<endl;

        cin>>data;
    }
}

void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        if(q.front()->left!=NULL){
            q.push(q.front()->left);
        }
        if(q.front()->right!=NULL){
            q.push(q.front()->right);
        }
        cout<<q.front()->data<<" ";
        q.pop();
        if(q.front()==NULL){
            cout<<endl;
            q.pop();
            q.push(NULL);
        }

    }
}
Node* bstFromInorder(int inorder[],int s,int e){
  
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;

    int element= inorder[mid];
    Node*root=new Node(element);
    root->left=bstFromInorder(inorder,s,mid-1);
    root->right=bstFromInorder(inorder,mid+1,e);

    return root;

}
void levelOrderTraverser(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        
        Node*temp = q.front();
         q.pop();
         if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
         }
         else{
            cout<<temp->data<<" ";
         if(temp->left !=NULL){
            q.push(temp->left);
        }
         if(temp->right !=NULL){
            q.push(temp->right);
        }
         }
        
       
         
       
        
        
    }
}
bool searchInBinaryTree(Node*root,int target){
    if(root->data==target){
        return true;
    }
    if(root==NULL){
        return false;
    }
    bool left=false;
    bool right=false;
    if(target>root->data){
        right= searchInBinaryTree(root->right,target);
    }
    else{
        left=searchInBinaryTree(root->left,target);
    }
   
    
    return right ||left;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int s=0;
    int e=size-1;
    Node* root = bstFromInorder(arr,s,e);
    // cout<<root->data;
   
   
    // createNode(root);
    
    // int val =55;
    //     bool ans = searchInBinaryTree(root,55);
    // cout<<endl;
    // cout<<ans<<endl;
    // if(ans){
    //     cout<<"present";

    // }
    // else{
    //     cout<<"not present";
    // }
    // cout<<ans<<endl;



    levelOrderTraverser(root);
 

    
    


return 0;
}