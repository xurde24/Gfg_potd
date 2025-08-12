class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        
        sort(prices.begin(), prices.end());
        vector<int> ans;
        int n = prices.size();
        int buy = (n + k) / (k + 1); 
        int s1 = 0, s2 = 0;

        
        for (int i = 0; i < buy; i++) {
            s1 += prices[i];
        }
        for (int i = n - 1; i >= n - buy; i--) {
            s2 += prices[i];
        }

        ans.push_back(s1);
        ans.push_back(s2);

        return ans;
    }
};
