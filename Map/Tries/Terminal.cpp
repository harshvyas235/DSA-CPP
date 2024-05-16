#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class Terminal{
    public:

    char val;
    bool isterminal;
    Terminal* child[26];

    Terminal(char val){
        this->val=val;
        this->isterminal=false;
        for (int i = 0; i < 26; i++)
        {
            this->child[i]=NULL;
        }
        
    }

};

void insert(Terminal*root,string word){
    cout<<"current string for the proccessing "<<word<<endl<<endl;
    if(word.length()==0){
        root->isterminal= true;
        return;
    }

    char ch = word[0];
    int index = ch -'a';
    Terminal* children;
    if(root->child[index]!=NULL){
        children=root->child[index];
        
    }
    else{
        children= new Terminal(ch);
        root->child[index]= children;
    }

    insert(children,word.substr(1));
}


bool fount(Terminal*root,string word){
    cout<<"current string for the proccessing "<<word<<endl<<endl;
    if(word.length()==0){
        
        return root->isterminal;
    }

    char ch = word[0];
    int index = ch -'a';
    Terminal* children;
    if(root->child[index]!=NULL){
        children=root->child[index];
        
    }
    else{
        return false;
    }

    fount(children,word.substr(1));
}
void print(Terminal* root,string val){
    int index = val-'a';
    

    if(root->child[index]!=NULL){
        cout<<root->child[index];
        for(int i=0;i<26;i++){
            Terminal* temp = root->child[index];
            prin(child,)
        }
    }
}

int main(){

    Terminal* node = new Terminal('-');

    insert(node,"harsh");
    insert(node,"harry");
    insert(node,"love");
    

    if(fount(node,"love")){
        cout<<"love is found";
    }
    else{
        cout<<"love is not found";
    }





return 0;
}