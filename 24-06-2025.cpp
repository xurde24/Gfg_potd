class Solution {
  public:
    string maxSubseq(string& s, int k) {
        // code here
        int n = s.length();
        string result = "";
        
        for(int i=0; i<n; i++) {
            while(!result.empty() > 0 && result.back() < s[i] && k > 0) {
                result.pop_back();
                k--;
            }
            result += s[i];
        }
        
        while(k) {
            result.pop_back();
            k--;
        }
        
        return result;
    }
};

