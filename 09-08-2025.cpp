#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
 public:
  int getLongestPrefix(string &s) {
    int n = s.length();
    if (n <= 1) {
      return -1;
    }

    vector<int> z(n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
      if (i <= r) {
        z[i] = min(r - i + 1, z[i - l]);
      }
      while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
        z[i]++;
      }
      if (i + z[i] - 1 > r) {
        l = i;
        r = i + z[i] - 1;
      }
    }

 
    for (int len = n - 1; len >= 1; len--) {

      if (z[len] >= n - len) {
        
        return len;
      }
    }

 
    return -1;
  }
};
