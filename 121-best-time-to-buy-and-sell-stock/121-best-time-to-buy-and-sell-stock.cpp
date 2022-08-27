class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int m = prices[0];
        for(int i=1;i<prices.size();i++)
        {
            int dif = prices[i] - m;
            p = max(p,dif);
            m = min(m,prices[i]);
        }
        return p;
    }
};