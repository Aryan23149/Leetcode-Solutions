class Solution {
public:
    //for method 2;
    int answer(int n,vector<int>& dp){
        if(n==0||n==1) return 1;
        int left,right;
        if(dp[n-1]!=-1){left=dp[n-1];}
        else{left=answer(n-1,dp);}
        if(dp[n-2]!=-1){right=dp[n-2];}
        else{right=answer(n-2,dp);}
        dp[n]=left+right;
        return left+right;
    }
    int climbStairs(int n) {



        //method 1: brute force
        // if(n==0||n==1){return 1;}
        // int left=climbStairs(n-1);
        // int right=climbStairs(n-2);
        // return left+right;




        //method 2: using memoization
        // vector<int> dp(n+1,-1);
        // int x=answer(n,dp);
        // return x;





        //method 3: using tabulation
        // vector<int> dp(n+1,-1);
        // dp[0]=1;
        // dp[1]=1;
        // for(int i=2;i<=n;i++){
        //     dp[i]=dp[i-1]+dp[i-2];
        // }
        // return dp[n];




        //method 4: using tabulation with space  optimizATION
        // if(n<=1){
        //     return n;
        // }
        // vector<int> dp (3,-1);
        // dp[1]=1;dp[0]=1;
        // for(int i=2;i<n+1;i++){
        //     dp[2]=dp[1]+dp[0];
        //     dp[0]=dp[1];
        //     dp[1]=dp[2];
        // }
        // return dp[2];



    //just playing
    //     if(n<=2){
    //         if(n==0||n==1){
    //             return 1;
    //         }
    //         else{
    //             return n;
    //         }
    //     }
    //     return pow(2,n-1)-1;



    }
};