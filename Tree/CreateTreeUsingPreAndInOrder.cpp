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

int find(int inorder[],int value,int size){
    for (int i = 0; i < size; i++)
    {
        if(value==inorder[i]){
            return i;
        }
    }
    return -1;
    
}

Node* CreateTreeUsingPreAndInOrder(int preOrder[],int& preIndex,int inOrder[],int inOrdStart,int inOrdEnd,int size){
    if(preIndex>=size){
        return NULL ;
    }
    if(inOrdStart>inOrdEnd){
        return NULL;
    }
    
    int element = preOrder[preIndex];
    Node* root = new Node(element);
    int index = find(inOrder,element,size);
    preIndex++;
    root->left=CreateTreeUsingPreAndInOrder(preOrder,preIndex,inOrder,inOrdStart,index-1,size);
    root->right=CreateTreeUsingPreAndInOrder(preOrder,preIndex,inOrder,index+1,inOrdEnd,size);


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
int inorder[]={9,3,15,20,7};
int preorder[]={3,9,20,15,7};
int preindex=0;
int inorderStart = 0;
int inorderEnd=4;
int size =5;
Node* root=CreateTreeUsingPreAndInOrder(preorder,preindex,inorder,inorderStart,inorderEnd,size);
levelOrderTraverser(root);

return 0;
}