class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        //better: this method is for c++ only
        // next_permutation(nums.begin(),nums.end());
        // return;
        
    
        //optimal approach
        int breakpoint_index=-1,n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                breakpoint_index=i;
                break;
            }
        }
        if(breakpoint_index==-1){
            return  reverse(nums.begin(),nums.end());
        }
        else{
            int small=INT_MAX,small_index=-1;
            for(int i=breakpoint_index+1;i<n;i++){
                if(nums[i]<small){
                    if(nums[i]>nums[breakpoint_index]){
                        // small=nums[i];
                        small_index=i;
                    }
                    small=nums[i];
                }
            }
            swap(nums[small_index],nums[breakpoint_index]);
            sort(nums.begin()+breakpoint_index+1,nums.end());
        }
        return;
    }
};