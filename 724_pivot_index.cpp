class Solution {
    public:
        int traverse_left(vector<int>& nums,int i){
            if(i==0) return 0;
            int sum=0;
            for(int y = i-1;y>=0;y--){
                sum+=nums[y];
            }
            return sum;
        }
        int traverse_right(vector<int>& nums,int i){
            int n=nums.size();
            if(i==n-1) return 0;
            int sum=0;
            for(int y = i+1;y<=n-1;y++){
                sum+=nums[y];
            }
            return sum;
        }
        int pivotIndex(vector<int>& nums) {
            //brute force approach
            // time complexity is O(N*N) for each index...we are calculating left and right index and both together costs nearly the cost of traversal of array once
            // space complexity is  O(N) for using the given array though O(1) used as auxilary space
            // for(int i=0;i<nums.size();i++){
            //     int left_sum=traverse_left(nums,i);
            //     int right_sum=traverse_right(nums,i);
            //     if(left_sum==right_sum){
            //         return i;
            //     }
            // }
            // return -1;
            // approach 2 : using prefix_sum and suffix_sum array
            // time complexity is O(5N)
            // space complexity is O(2N)
            // int n=nums.size();
            // vector<int> prefix_sum(n,0);
            // vector<int> suffix_sum(n,0);
            // for(int i=1 ;i<n;i++){
            //     prefix_sum[i]=prefix_sum[i-1]+nums[i-1];
            // }
            // for(int i=n-2;i>=0;i--){
            //     suffix_sum[i]=suffix_sum[i+1]+nums[i+1];
            // }
            // for(int i=0;i<n;i++){
            //     if(prefix_sum[i]==suffix_sum[i]){
            //         return i;
            //     }
            // }
            // return -1;
    
    
            // approach 3 : using just a sum varibale and no other space
            // time complexity is O(2N)
            // space complexity is O(1)
            // int n = nums.size();
            // int sum=0;
            // for(int i=0;i<n;i++){
            //     sum+=nums[i];
            // }
            // int left_sum=0;
            // int right_sum=sum;
            // for(int i=0;i<n;i++){
            //     if(i>0) left_sum+=nums[i-1];
            //     if(i<n-1) right_sum-=nums[i];
            //     if(i==n-1){right_sum=0;}
            //     if(left_sum==right_sum){
            //         return i;
            //     }
            // }
            // return -1;
        }
    };