class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        unordered_map<int, bool> mapp;
        for(int i=0; i<n; i++){
            mapp[arr[i]] = true;
        }
        
        int maxEle = arr[n-1];
        for(int i=1; i<=maxEle; i++){
            if(mapp.find(i) == mapp.end()){
                return i;
            }
        }
        if(arr[n-1] < 0){
            return 1;
        }
        return arr[n-1]+1;
    }
};
