class Solution {
    public:
        int solve(int i,int j,int n,vector<vector<int>> & grid){
            if(i==n-1 && j==n-1) {
                int current_value = grid[i][j];
                if(current_value==1){
                    grid[i][j]--;
                } 
                return current_value;
            }
            if(grid[i][j]==-1) return 0;
            int right=0,down=0;
            if(j<n-1 && grid[i][j+1]!=-1){ 
                int current_value=grid[i][j];
                if(current_value==1) grid[i][j]--;
                right=solve(i,j+1,n,grid)+current_value;
                if(current_value==1) grid[i][j]++;
            }
            if(i<n-1&& grid[i+1][j]!=-1) {
                int value=grid[i][j];
                if(value==1) grid[i][j]--;
                down=solve(i+1,j,n,grid)+value;
                if(value==1) grid[i][j]++;
            }
            return max(right,down);
        }
        int SOLVE(int i ,int j,int n,vector<vector<int>> & grid){
            
        }
        int cherryPickup(vector<vector<int>>& grid) {
            return solve(0,0,0,grid.size(),grid)+SOLVE(n-1,n-1,grid.size(),grid);
        }
    };