class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice =0;
        int bestBuy =prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxPrice =max(maxPrice,prices[i]-bestBuy);
            }
            bestBuy = min(prices[i],bestBuy);
        }
        return maxPrice;
    }
};