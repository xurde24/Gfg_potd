class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int j=0,n=s.size(),ans=-1;
        map<char,int> mp;
        for(int i=0;i<n;i++) {
            mp[s[i]]++;
            while(j<i and mp.size()>k) {
                mp[s[j]]--;
                if(mp[s[j]]==0) {
                    mp.erase(s[j]);
                }
                j++;
            }
            if(mp.size()==k)
            ans=max(ans, i-j+1);
        }
        return ans;
    }
};
