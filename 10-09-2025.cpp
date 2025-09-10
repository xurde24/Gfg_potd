class Solution {
  public:
    string largestSwap(string &s) {
        int n=s.size();
        int maxi=n-1;
        int i=n-1,j=n-1,k=n-1;
        while(j>=0){
            if(s[j]<s[maxi]){
                i=j;
                k=maxi;
            }
            else if(s[j]>s[maxi]) maxi=j;
            j--;
        }
        swap(s[i],s[k]);
        return s;
    }
};

