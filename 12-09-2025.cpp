class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        if (n <= 1) return 0;

        sort(arr.begin(), arr.end());
        int ans = arr[n-1] - arr[0];

        for (int i = 1; i < n; ++i) {
        
            if (arr[i] < k) continue;

            int minElem = min(arr[0] + k, arr[i] - k);
            int maxElem = max(arr[n-1] - k, arr[i-1] + k);
            ans = min(ans, maxElem - minElem);
        }
        return ans;
    }
};

