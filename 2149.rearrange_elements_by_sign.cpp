class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //method 1: brute force
        // int n=nums.size(),pos[n/2],neg[n/2],m=0,k=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         pos[m++]=nums[i];
        //     }
        //     else{
        //         neg[k++]=nums[i];
        //     }
        // }
        // m=0;k=0;
        // for(int i=0;i<n;i++){
        //     if(i%2==0){
        //         nums[i]=pos[m++];
        //     }
        //     else{
        //         nums[i]=neg[k++];
        //     }
        // }
        // return nums;
        //method 2: better brute force
        // int n=nums.size(),pos[n/2],neg[n/2],m=0,k=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         pos[m++]=nums[i];
        //     }
        //     else{
        //         neg[k++]=nums[i];
        //     }
        // }
        // m=0;k=0;
        // for(int i=0;i<n/2;i++){
        //     nums[2*i]=pos[m++];
        //     nums[2*i+1]=neg[k++];
        // }
        // return nums;

        //optimal approach: returning different array
        
        // int n=nums.size();
        // vector<int> ans(n,0);
        // int positive_index=0,negative_index=1;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         ans[positive_index]=nums[i];
        //         positive_index+=2;
        //     }
        //     else{
        //         ans[negative_index]=nums[i];
        //         negative_index+=2;
        //     }
        // }
        // return ans;
    }
};