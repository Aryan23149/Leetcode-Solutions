class Solution {
public:
    void dfs(vector<vector<int>>& a,int arr[],int i,int n){
        arr[i]=1;
        for(int j=0;j<n;j++){
            if(j!=i-1&&a[i-1][j]!=0){
                if(arr[j+1]==0)
                {
                    dfs(a,arr,j+1,n);
                }
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),visited[n+1],count=0;//data structures we will be needing
        for(int i=0;i<=n;i++){//initializes all array members to zero
            visited[i]=0;
        }
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                dfs(isConnected,visited,i,n);//calls dfs for every unvisited array 
                count++;//counts no of provinces
            }
        }
        return count;
    }
};