#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int usingRec(int capacity,int w[],int p[],int index,int n){

    if(index>=n){
        return 0;
    }
    

    int include=0;
    if(w[index]<=capacity){
        include=p[index]+usingRec(capacity- w[index] ,w,p,index+1,n);
    }
    int exclude =0+ usingRec(capacity,w,p,index+1,n);
    int ans = max(exclude,include);
    return ans;
}
int usingMemo(int capacity,int w[],int p[],int index,int n,vector<vector<int>>&dp){
     if(index>=n){
        return 0;
    }
    if(dp[capacity][index]!=-1){
        return dp[capacity][index];
    }
    
    int include=0;
    if(w[index]<=capacity){
        include=p[index]+usingMemo(capacity- w[index] ,w,p,index+1,n,dp);
    }
    int exclude =0+ usingMemo(capacity,w,p,index+1,n,dp);
    int ans = max(exclude,include);
    dp[capacity][index]=ans;
    return dp[capacity][index];

}
int usingTab(int capacity,int w[],int p[],int index,int n){
vector<vector<int> >dp(capacity+1,vector<int>(n+1,-1));
 for (int i = 0; i <= capacity; i++)
 {
    dp[i][n]=0;
 }
 for (int i = 0; i <=capacity; i++)
 { 
    for (int j = n-1; j >=0; j--)
    {
    int include=0;
    if(w[j]<=i){
        include=p[j]+dp[i- w[j]][j+1];
    }
    int exclude =0+ dp[i][j+1];   

    int ans = max(exclude,include);
    dp[i][j]=ans;
        
    }
    
    
    
 }
 return dp[capacity][0];
 
 
    
}

int main(){
int n=3;
int w[]={10,20,30};
int p[]={60,100,120};
int capacity =50;
int index=0;
vector<vector<int> >dp(capacity+1,vector<int>(n+1,-1));
// int ans = usingRec(capacity,w,p,index,n);
// int ans = usingMemo(capacity,w,p,index,n,dp);
int ans = usingTab(capacity,w,p,index,n);




cout<<ans;
return 0;
}