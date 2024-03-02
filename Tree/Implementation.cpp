#include<iostream>
#include<string.h>
#include<vector>
#include<queue>

using namespace std;

class Node{

    public:
    int data ;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }

    void tree(){
        cout<<"heelo";
    }

};

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    // cout<<"rigt pe aaya";
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    
    postOrder(root->left);
   
    postOrder(root->right);
    cout<<root->data<<" ";
}


Node* createTree(){
    int data ;
    // cout<<"enter the value of the node : "<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    // cout<<"left Node of "<<data<<": "<<endl;
    root->left  =createTree();
    // cout<<"right Node of "<<data<<": "<<endl;
    root->right =createTree();
    return root;
}
void levelOrderTraverser(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
       
        
        
        if(q.front()->left !=NULL){
            q.push(q.front()->left);
        }
         if(q.front()->right !=NULL){
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
int main(){

    Node* root = createTree();
    // cout<<root->data;
    cout<<"printing pre order"<<endl;

    preOrder(root);
    cout<<endl;

     cout<<"printing In order"<<endl;

    inOrder(root);
    cout<<endl;


     cout<<"printing post order"<<endl;

    postOrder(root);
    cout<<endl;
    cout<<"level order print : "<<endl;
    levelOrderTraverser(root);

    

return 0;
}