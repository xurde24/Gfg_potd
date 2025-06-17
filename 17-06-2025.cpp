class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<long long> prefix(n + 1, 0);

        
        for (int i = 0; i < n; ++i)
            prefix[i + 1] = prefix[i] + arr[i];

        long long minRemoved = LLONG_MAX;

        for (int i = 0; i < n; ++i) {
            int low = arr[i];
            int high = low + k;
            int idx = upper_bound(arr.begin(), arr.end(), high) - arr.begin();
            long long removeLeft = prefix[i];
            long long removeRight = (prefix[n] - prefix[idx]) - 1LL * (n - idx) * high;
            long long totalRemoved = removeLeft + removeRight;
            minRemoved = min(minRemoved, totalRemoved);
        }

        return (int)minRemoved;
    }
};


