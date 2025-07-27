class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m= mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    for(int k=0;k<m;k++){
                    if(mat[i][k]!=0)
                    mat[i][k]= INT_MIN;}
                    for(int k=0;k<n;k++){
                        if(mat[k][j]!=0)
                    mat[k][j]=INT_MIN;
                    }
                    }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               
            if(mat[i][j]==INT_MIN)
            mat[i][j]=0;
            }
        }
    }
};

