class Solution {
    public:
        int solve(vector<int> & nums,int i,int sum1,int sum,int elements){
            if(i==nums.size()){
                if(2*elements==nums.size()){
                    return abs(sum1-sum);
                }
                return INT_MAX;
            }
            int pick_for_subset_one=INT_MAX;
            if(elements<nums.size()/2){
                pick_for_subset_one=solve(nums,i+1,sum1+nums[i],sum-nums[i],elements+1);
            }
            int not_pick_for_subset_one=solve(nums,i+1,sum1,sum,elements);
            return min(pick_for_subset_one,not_pick_for_subset_one);
        }
        int minimumDifference(vector<int>& nums) {
            // brute force approach:
            // time complexity : O(4 ^n)
            // space complexity : O(2 raised n)
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
            }
            return solve(nums,0,0,sum,0);
        }
    };