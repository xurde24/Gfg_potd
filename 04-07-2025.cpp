class Solution {
  public:

    int countAtMostK(vector<int> &arr, int k) {
        // code here
      int i = 0;
      int  j = 0;
      int ans = 0;
      int n =arr.size();
      unordered_map<int,int> mp;
      while(i<n && j<n)
      {
          mp[arr[j]]++;
          
          
              while(mp.size()>k)
              {
                  
                  mp[arr[i]]--;
                  if(mp[arr[i]] == 0)
                  mp.erase(arr[i]);
                  i++;
              }
              ans = ans + (j-i+1);
          j++;
      }
        return ans ;
        
    }
};
