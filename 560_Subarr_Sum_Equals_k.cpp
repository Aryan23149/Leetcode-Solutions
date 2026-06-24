class Solution {
    public:
        int subarr_sum(vector<int> &nums,int i,int j){
            int sum=0;
            for(int l=i;l<=j;l++){
                sum+=nums[l];
            }
            return sum;
        }
        int subarr_sum_using_prefix_sum(int i,int j,int sum,vector<int> & prefix_sum){
            int left_sum,right_sum;
            if(i==0) left_sum=0;
            else left_sum=prefix_sum[i];
            if(j==prefix_sum.size()-1) right_sum=0;
            else right_sum=sum-prefix_sum[j+1];
            return sum-left_sum-right_sum;
        }
        int subarraySum(vector<int>& nums, int k) {
            // brute force approach:
            // time complexity is O(N*N*N)
            // Space Complexity is O(1) 
            // int n=nums.size();
            // int count=0;
            // for(int i=0;i<n;i++){
            //     for(int j=i;j<n;j++){
            //         if(subarr_sum(nums,i,j)==k){
            //             count++;
            //         }
            //     }
            // }
            // return count;
            // approach 2 : Using extra space like prefix_sum 
            // time complexity: O(N*N)
            // space complexity: O(N)
            // int n= nums.size();
            // vector<int> prefix_sum(n,0);
            // for(int i=1;i<n;i++){
            //     prefix_sum[i]=nums[i-1]+prefix_sum[i-1];
            // }
            // int count=0;
            // int sum=prefix_sum[n-1]+nums[n-1];
            // for(int i=0;i<n;i++){
            //     for(int j=i;j<n;j++){
            //         if((subarr_sum_using_prefix_sum(i,j,sum,prefix_sum))==k){
            //             count++;
            //         }
            //     }
            // }
            // return count;
    
            // optimized approach
            // time complexity: O(N)  attributed to traversal and insertion in the map...O(N*N) due to hash collisions
        
            // space complexity:O(N)
            int n =nums.size();// no of elements in the vector
            unordered_map<int,int> f;// hash_map to cache prefix_sum
            f[0]=1;// we know we get sum = 0 once for subarray of size 0
            int count=0;// it shall store no of subarrays with sum k
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=nums[i];// updating sum for prefix_sum
                int ques= sum -k;// what is sum - k 
                int freq=f[ques]; // did we get sum - k before? 
                count+=freq;// no of times we got sum-k is also the no of subarrays with sum k we get on including index i
                f[sum]++;// cache this new value of no of times we got this sum
            }
            return count;
    
        }
    };