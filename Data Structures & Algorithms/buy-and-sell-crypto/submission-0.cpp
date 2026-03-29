class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxa = 0;

        int i=0, j = 1;

        while(j < prices.size())
        {
            if(prices[i] < prices[j])
            {
                int diff = prices[j] - prices[i];
                maxa = max(maxa, diff);
                j++;
            }

            else{
                i=j;
                j++;
            }
        }

        return maxa;
    }
};
