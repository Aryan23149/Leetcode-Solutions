#include<vector>
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> a(n,vector(m,5));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j]=matrix[j][i];
            }
        }
        return a;
    }
};