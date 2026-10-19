class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = prices[0];
        int maxprofit = 0;

        int n = prices.size();

        for(int i = 0;i<n;i++){
            lowest = min(lowest,prices[i]);
            int profit = prices[i] - lowest;
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;
    }
};
