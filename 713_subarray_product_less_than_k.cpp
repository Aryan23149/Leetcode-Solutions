class Solution {
    public:
    
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            // first thought approach aka brute force one
            // its time complexity is O(N*N)
            // its space complexity is O(1)
            // int n=nums.size();
            // int count=0;
            // for(int i=0;i<n;i++){
            //     int product=1;
            //     for(int j=i;j<n;j++){
            //         product=product*nums[j];
            //         if(product<k){
            //             count++;
            //         }
            //         else break;
            //     }
            // }
            // return count;
            // better approach using two pointers and sliding window
            //time complexity is O(N) and Space Complexity is O(1)
            int i = 0;
            int j = 0;
            int n =  nums.size();
            int count=0;
            int product=1;
            while(j<n){
                product*=nums[j];
                while (i<=j && product >=k){
                    product/=nums[i++];
                }
                count+=j-i+1;
                j++;
            }
            return count;
        }
    };