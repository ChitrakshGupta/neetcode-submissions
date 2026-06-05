class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ma=INT_MIN;
        for(int i=0; i<prices.size(); i++){
            for(int j=i; j<prices.size(); j++){
                ma=max(ma,prices[j]-prices[i]);

            }
            
        }
        return ma;
    }
};
