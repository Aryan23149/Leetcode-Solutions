class Solution {
public:
//method 1 extreme brute force: tc=O(mn+mn(m+n)),sc=O(mn)
    void set_rows_columns_zero(int i,int j,vector<vector<int>> & matrix,int m,int n){
        for(int k=0;k<n;k++){
            matrix[i][k]=0;
        }
        for(int k=0;k<m;k++){
            matrix[k][j]=0;
        }
        return;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> tracker(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tracker[i][j]=matrix[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(tracker[i][j]==0){
                    set_rows_columns_zero(i,j,matrix,m,n);
                }
            }
        }
    }
};