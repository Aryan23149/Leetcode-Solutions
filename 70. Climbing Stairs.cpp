class Solution {
    public:
    
        // int solveClimbStairsUsingMemoization(int n,vector<int> &tabulatiop){
        //     if(n<0){
        //         return 0;
        //     }
        //     else if(n==0){
        //         return 1;
        //     }
        //     if(dp[n]!=-1){
        //         return dp[n];
        //     }
        //     dp[n]=solveClimbStairsUsingMemoization(n-1,dp) + 
        //     solveClimbStairsUsingMemoization(n-2,dp);
        //     return dp[n];
        // }
        // int scUsingOptimizedTabulation(int n ){
        //     if(n==0 || n== 1){return 1;}
        //     int prev1=1;
        //     int prev2=1;
        //     int current;
        //     for(int i=2;i<=n;i++){
        //         current=prev1+prev2;
        //         prev1=prev2;
        //         prev2=current;
        //     }
        //     return current;
        // }
        // int solveClimbStairsUsingTabulation(int n,vector<int> & tabulation_dp){
        //     tabulation_dp[0]=1;
        //     tabulation_dp[1]=1;
        //     for(int i=2;i<=n;i++){
        //         tabulation_dp[i]=tabulation_dp[i-1]+tabulation_dp[i-2];
        //     }
        //     return tabulation_dp[n];
        // }
        int climbStairs(int n) {
            // brute force approach 
            // time complexity:O(2 raised n) as solving recurrance takes this much time 
            // space complexity:O(n) as depth of recursion is n at maximum
            // if(n<0){
            //     return 0;
            // }
            // else if(n==0){
            //     return 1;
            // }
            // int num_of_ways=climbStairs(n-1)+climbStairs(n-2);
            // return num_of_ways;
     
    
            // dp solution using memoization approach
            // time complexity: O(n) // n+1 computations of n+1 arrays
            // space complexity: O(n+n) because of recursion stack and dp array
            // vector<int> dp(n+1,-1);
            // return solveClimbStairsUsingMemoization(n,dp);
    
            //dp solution using tabulation
            // time complexity : O(n) for loop runs once through the dp array till n
            // space complexity : O(n) for storing dps
            // if(n<0) return -1;
            // vector<int> tabulation_dp(n+1,0);
            // return solveClimbStairsUsingTabulation(n,tabulation_dp);
    
            // dp solution using space optimized tabulation
            // time complexity is O(n)
            // space complexity is O(1)
    
            if(n<0) return -1;
            return scUsingOptimizedTabulation(n);
        }
    };