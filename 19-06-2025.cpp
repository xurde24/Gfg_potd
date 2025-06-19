class Solution {
  public:
    string caseSort(string& s) {
        string lower, upper;
        
        
        for (char c : s) {
            if (islower(c))
                lower.push_back(c);
            else
                upper.push_back(c);
        }
   
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        
     
        int li = 0, ui = 0;
        string result = "";
        
        for (char c : s) {
            if (islower(c))
                result += lower[li++];
            else
                result += upper[ui++];
        }
        
        return result;
    }
};


