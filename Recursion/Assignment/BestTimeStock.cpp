https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
 

void solve(vector<int> price,int& minPrice,int& maxProfit,int i){

    if(i== price.size()){
        return;
    }
    if(price[i]<minPrice) minPrice=price[i];
   int indexProfit=price[i]-minPrice;
    if(indexProfit>maxProfit) maxProfit = indexProfit;

    solve(price,minPrice,maxProfit,i+1);
   
    
}



    int maxProfit(vector<int>& prices) {
          int minPrice =INT_MAX;
        int maxProfit=INT_MIN;
        solve(prices,minPrice,maxProfit,0);
        return maxProfit;
    }
};