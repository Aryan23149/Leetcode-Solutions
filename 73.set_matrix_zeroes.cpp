class Solution {
private:
    //for brute 
    void mark_zero(vector<vector<int>>& matrix ,int i,int j,int m,int n){
        for(int k=0;k<m;k++){
            matrix[k][j]=0;
        }
        for(int k=0;k<n;k++){
            matrix[i][k]=0;
        }
        return;
    }
    //for better brute
    void mark_INTMIN_one(vector<vector<int>> & matrix,int i,int j,int m,int n){
        for(int k=0;k<n;k++){
            if(matrix[i][k]!=0){matrix[i][k]=INT_MIN;}
        }
        for(int k=0;k<m;k++){
            if(matrix[k][j]!=0){matrix[k][j]=INT_MIN;}
        }
        return;
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //brute force

        // int m=matrix.size(),n=matrix[0].size();
        // vector<vector<int>> track(m,vector<int>(n));
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         track[i][j]=matrix[i][j];
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             mark_zero(track,i,j,m,n);
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=track[i][j];
        //     }
        // }
        // return;



        //little better brute with tc: O(MN) and sc:O(1) works iff and there is a specific number in matrix is absent
        // and then number can used to mark new zeros and old ones



        // int m=matrix.size(),n=matrix[0].size(),count=0;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             mark_INTMIN_one(matrix,i,j,m,n);
        //             count++;
        //         }
        //     }
        // }
        // if(count!=0){
        //     for(int i=0;i<m;i++){
        //         for(int j=0;j<n;j++){
        //             if(matrix[i][j]==INT_MIN){
        //                 matrix[i][j]=0;
        //             }
        //         }
        //     }
        // }
        // return;

        // int m=matrix.size(),n=matrix[0].size();
        // vector<int> rows,columns;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             rows.push_back(i);
        //             columns.push_back(j);
        //         }
        //     }
        // }
        // for(int i=0;i<rows.size();i++){
        //     int row_num=rows[i];
        //     for(int j=0;j<n;j++){
        //         matrix[row_num][j]=0;
        //     }
        // }
        // for(int i=0;i<columns.size();i++){
        //     int column_num=columns[i];
        //     for(int j=0;j<m;j++){
        //         matrix[j][column_num]=0;
        //     }
        // }
        // return;
        //optimal
        int m=matrix.size(),n=matrix[0].size();
        int first=matrix[0][0],check=0;
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0){
                first=0;
                check=1;
                break;
            }
        }
        if(check==1){
            first=matrix[0][0];
            check=0;
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }

        for(int i=1;i<m;i++){
            if(matrix[i][0]==0){
                check=1;
                break;
            }
        }
        if(check==0&&matrix[0][0]==1){
            for(int i=1;i<m;i++){
                if(matrix[i][0]==0){
                    first=0;
                    break;
                }
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        matrix[0][0]=first;
    }
};