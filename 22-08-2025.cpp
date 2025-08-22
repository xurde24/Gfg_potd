class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        
        for (int i = 0; i < n; i++) {
            minVal = min(minVal, mat[i][0]);
            maxVal = max(maxVal, mat[i][m - 1]);
        }
        
        int desired = (n * m + 1) / 2; 
        
        while (minVal < maxVal) {
            int mid = minVal + (maxVal - minVal) / 2;
            
            int place = 0;
            for (int i = 0; i < n; i++) {
                place += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
            }
            
            if (place < desired)
                minVal = mid + 1;
            else
                maxVal = mid;
        }
        return minVal;
    }
};


