class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            // brute force approach
            // time complexity is O(N^2)
            // space co
            // int n= nums.size();
            // int ans=INT_MAX;
            // for(int i=0;i<n;i++){
            //     int sum=0;
            //     for(int j=i;j<n;j++){
            //         sum+=nums[j];
            //         int length=j-i+1;
            //         if(sum>=target) ans=min(ans,length);
            //     }
            // }
            // if(ans==INT_MAX) return 0;
            // return ans;
    
    
            // This is the Optimal Way Using Two Pointers or say sliding windows
            // Time Complexity is O(N)
            // Space Complexity is O(1)
            int i=0;int j=0;int n=nums.size();
            int sum=0;int count=0;int ans=INT_MAX;
            while(j<n){
                sum+=nums[j];
                while(i<=j && sum>=target) {
                    ans=min(ans,j-i+1);
                    sum-=nums[i];
                    i++;
                }
                j++;
            }
            if(ans==INT_MAX) ans=0;
            return ans;
        }
    };