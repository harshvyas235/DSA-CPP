#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
    int findAns(int n,int k,vector< int>&dp){
        if(n==1){
            return k;
        }
        if(n==2){
            return k+(k*(k-1));
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]= (findAns(n-1,k,dp) +findAns(n-2,k,dp))*(k-1);
        return dp[n];
    }
int main(){
int n=3;
int k =;
vector< int>dp(n+1,-1);
 int ans = findAns(n,k,dp);
cout<<ans;
return 0;
}