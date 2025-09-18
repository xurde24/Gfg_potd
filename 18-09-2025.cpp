class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int> res(n, -1); 
        stack<int> st; 
        
       
        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n; // circular index
            
      
            while (!st.empty() && arr[st.top()] <= arr[idx]) {
                st.pop();
            }
            
         
            if (!st.empty()) {
                res[idx] = arr[st.top()];
            }
          
            st.push(idx);
        }
        
        return res;
    }
};

