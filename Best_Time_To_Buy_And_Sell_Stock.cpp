class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int curr_price = 0;
        int max_price = 0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy_price){
                buy_price = prices[i];
            }
        curr_price = prices[i] - buy_price;
        max_price = max(curr_price,max_price);
    }
    return max_price;
    }
};