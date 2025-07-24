class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int mn = right.size() > 0?
            *min_element(right.begin(), right.end()): n;
        int mx = left.size() > 0?
            *max_element(left.begin(), left.end()): 0;
        return max(n-mn, mx);
    }
};
//GFG POTD solution for 24 July
