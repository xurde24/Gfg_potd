class Solution {
  public:
   int maxSum(vector<int> &arr) {
        // code here
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
           ans=max(arr[i]+arr[i+1],ans);
          return ans;
    
        
    }
};

