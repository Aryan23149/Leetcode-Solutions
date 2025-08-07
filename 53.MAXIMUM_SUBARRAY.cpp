class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n=nums.size();
        // int sum=INT_MIN;
        //BRUTE FORCE
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int SUM=0;
        //         for(int k=i;k<=j;k++){
        //             SUM+=nums[k];
        //         }
        //         if(SUM>sum){
        //             sum=SUM;
        //         }
        //     }
        // }
        // return sum;
        //BETTER APPROACH: O(N*N)
        // for(int i=0;i<n;i++){
        //     int SUM=0;
        //     for(int j=i;j<n;j++){
        //         SUM+=nums[j];
        //         if(SUM>sum)
        //         {
        //             sum=SUM;
        //         }
        //     }
        //     if(SUM>sum){
        //         sum=SUM;
        //     }
        // }
        // return sum;

        //optimal approach: kadane's algorithm
        int sum=0,n=nums.size();
        int maxi=INT_MIN;
        int start=-1,end=-1;//for indexes
        for(int i=0;i<n;i++){
            if(sum==0) start=i;
            sum+=nums[i];
            if(maxi<sum){
                start=i;
                end=i;
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};