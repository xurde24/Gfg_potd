class Solution {
  public:
    int lcmTriplets(int n) {
        if (n < 3) {
          
            return n;
        }
    
        if (n % 2 != 0) {
           
            return n * (n - 1) * (n - 2);
        }
    
        if (__gcd(n, n - 3) == 1) {
          
            return n * (n - 1) * (n - 3);
        }
    
      
        return (n - 1) * (n - 2) * (n - 3);
    }
};

