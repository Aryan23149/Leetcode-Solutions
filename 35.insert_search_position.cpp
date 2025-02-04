class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //method 1 liner search
        // int index=nums.size();
        // for(int i=0;i<index;i++){
        //     if(nums[i]>=target){
        //         index=i;
        //         break;
        //     }
        // }
        // return index;

        //method 2 lower bound
        // int low=0,high=nums.size()-1,ans=high+1;
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     if(nums[mid]>=target){
        //         high=mid-1;
        //         ans=mid;
        //     }
        //     else{
        //         low=mid+1;
        //     }
        // }
        // return ans;
    }
};