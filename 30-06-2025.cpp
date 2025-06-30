class Solution {
  public:
    int solve(vector<int> diff, int k, int w, int mid){
        int p=0;
        for(int i=0; i<diff.size(); i++){
            diff[i] += p;
            p=diff[i];
            
            if(diff[i]>=mid)
                continue;
            
            k -= (mid-diff[i]);
            
            if(k<0){
                return 0;
            }
            
            if(i+w < diff.size()){
                diff[i+w] -= (mid-diff[i]);
            }
            
            p = mid;
        }
        return 1;
    }
  
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n=arr.size();
        vector<int> diff(n);
        diff[0]=arr[0];
        int l = arr[0];
        for(int i=1; i<n; i++){
            diff[i]=arr[i]-arr[i-1];
            l = min(l, arr[i]);
        }
        
        int h = l+k;
        
        int ans;
        while(l<=h){
            int mid = l + (h-l)/2;
            
            if(solve(diff, k, w, mid)){
                ans = mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};

